/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 03:22:48 by wjang             #+#    #+#             */
/*   Updated: 2020/02/06 04:45:38 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			valid_location(int *map, int col, int row)
{
	int		i;

	i = 1;
	while (i <= col)
	{
		if (row == map[col - i] || row == map[col - i] - i
		|| row == map[col - i] + i)
			return (0);
		i++;
	}
	return (1);
}

void		init_map(int *map)
{
	int		i;

	i = 0;
	while (i < 10)
		map[i++] = 0;
}

void		print_map(int *map)
{
	int		i;
	int		int_map;
	char	c;

	i = 1;
	int_map = map[0];
	c = map[0] + '0';
	write(1, &c, 1);
	while (i < 10)
	{
		int_map = int_map * 10 + map[i];
		c = map[i] + '0';
		write(1, &c, 1);
		++i;
	}
	write(1, &"\n", 1);
}

void		dfs(int *map, int col, int *map_cnt)
{
	int		row;

	row = 0;
	while (row <= 9)
	{
		if (col == 0 || valid_location(map, col, row))
		{
			map[col] = row;
			if (col == 9)
			{
				print_map(map);
				*map_cnt += 1;
			}
			else
				dfs(map, col + 1, map_cnt);
		}
		row++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	int		map[10];
	int		map_cnt;

	map_cnt = 0;
	init_map(map);
	dfs(map, 0, &map_cnt);
	return (map_cnt);
}
