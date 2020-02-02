/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jipark <jipark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:57:37 by jipark            #+#    #+#             */
/*   Updated: 2020/02/02 19:54:07 by jipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper.h"
#include "ft_process_input.c"
#include "ft_backtracking.c"

int		main(int argc, char *argv[])
{
	int **map_arr;
	int map_cnt;
	int i;

	if (argc == 2)
	{
		init_restriction_array();
		if (!is_valid_input(argv[1]))
		{
			write(1, "Error\n", 6);
		}
		else
		{
			map_arr = get_map_array();
			dfs(map_arr, 0, 0);
			if (!g_map_cnt)
				write(1, "Error\n", 6);
			free_map_array(map_arr);
		}
		free_restriction_array();
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
