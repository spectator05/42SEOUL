/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jipark <jipark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:55:26 by jipark            #+#    #+#             */
/*   Updated: 2020/02/02 19:46:16 by jipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_number(void)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < g_size)
		{
			if (!(1 <= g_row_restriction[i][j]
			&& g_row_restriction[i][j] <= g_size))
				return (0);
			if (!(1 <= g_col_restriction[i][j]
			&& g_col_restriction[i][j] <= g_size))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		set_restriction_array(char *input)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			g_col_restriction[0][i / 2] = (int)(input[i] - '0');
			g_col_restriction[1][i / 2] = (int)(input[i + 8] - '0');
			g_row_restriction[0][i / 2] = (int)(input[i + 16] - '0');
			g_row_restriction[1][i / 2] = (int)(input[i + 24] - '0');
		}
		else
		{
			if (input[i] != ' ' || input[i + 8] != ' '
			|| input[i + 16] != ' ' || input[i + 24] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

int		is_valid_input(char *input)
{

	if (input[31] != '\0')
		return (0);
	input[31] = ' ';
	if (!set_restriction_array(input))
		return (0);
	if (!is_valid_number())
		return (0);
	return (1);
}

int		**get_map_array(void)
{
	int **map_arr;
	int row;
	int col;

	row = 0;
	map_arr = (int **)malloc(sizeof(int *) * g_size);
	while (row < 4)
	{
		map_arr[row] = (int *)malloc(sizeof(int) * g_size);
		col = 0;
		while (col < 4)
		{
			map_arr[row][col] = 0;
			col++;
		}
		row++;
	}
	return (map_arr);
}

void	init_restriction_array(void)
{
	int cnt;

	cnt = 0;
	g_row_restriction = (int **)malloc(sizeof(int *) * 2);
	g_col_restriction = (int **)malloc(sizeof(int *) * 2);
	while (cnt < 2)
	{
		g_row_restriction[cnt] = (int *)malloc(sizeof(int) * g_size);
		g_col_restriction[cnt] = (int *)malloc(sizeof(int) * g_size);
		cnt++;
	}
}

void	free_map_array(int **map_arr)
{
	int i;

	i = 0;
	while (i < g_size)
	{
		free(map_arr[i]);
		i++;
	}
	free(map_arr);
}

void	free_restriction_array(void)
{
	int i;

	i = 0;
	while (i < 2)
	{
		free(g_row_restriction[i]);
		free(g_col_restriction[i]);
		i++;
	}
	free(g_col_restriction);
	free(g_row_restriction);
}
