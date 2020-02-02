/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jipark <jipark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:58:12 by jipark            #+#    #+#             */
/*   Updated: 2020/02/02 20:33:21 by jipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_required_conditions(int **map_arr, int row, int col);

int		is_possible_row(int **map_arr, int row, int col)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (map_arr[row][i] == map_arr[row][col])
			return (0);
		i++;
	}
	return (1);
}

int		is_possible_col(int **map_arr, int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (map_arr[i][col] == map_arr[row][col])
			return (0);
		i++;
	}
	return (1);
}

void	print_map(int **map_arr)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < g_size)
	{
		j = 0;
		while (j < g_size - 1)
		{
			c = map_arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = map_arr[i][j] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
	g_map_cnt += 1;
}

int		compare_restriction(int first, int last, int row, int col)
{
	if (row >= 0)
	{
		if (first == g_row_restriction[0][row]
		&& last == g_row_restriction[1][row])
			return (1);
	}
	else
	{
		if (first == g_col_restriction[0][col]
		&& last == g_col_restriction[1][col])
			return (1);
	}
	return (0);
}

int		check_row_exception(int **map_arr, int row)
{
	int i;
	int max_left;
	int max_right;
	int left_cnt;
	int right_cnt;

	right_cnt = 1;
	left_cnt = 1;
	i = 0;
	max_left = map_arr[row][0];
	max_right = map_arr[row][3];
	while (++i < 4)
	{
		if (map_arr[row][i] > max_left)
		{
			left_cnt++;
			max_left = map_arr[row][i];
		}
		if (map_arr[row][3 - i] > max_right)
		{
			right_cnt++;
			max_right = map_arr[row][3 - i];
		}
	}
	return (compare_restriction(left_cnt, right_cnt, row, -1));
}

int		check_col_exception(int **map_arr, int col)
{
	int i;
	int max_top;
	int max_bot;
	int top_cnt;
	int bot_cnt;

	top_cnt = 1;
	bot_cnt = 1;
	i = 0;
	max_top = map_arr[0][col];
	max_bot = map_arr[3][col];
	while (++i < 4)
	{
		if (map_arr[i][col] > max_top)
		{
			top_cnt++;
			max_top = map_arr[i][col];
		}
		if (map_arr[3 - i][col] > max_bot)
		{
			bot_cnt++;
			max_bot = map_arr[3 - i][col];
		}
	}
	return (compare_restriction(top_cnt, bot_cnt, -1, col));
}

void	dfs(int **map_arr, int row, int col)
{
	if (g_map_cnt == 1)
		return ;
	if (row == 3 && col == 4)
	{
		if (check_row_exception(map_arr, row))
			print_map(map_arr);
	}
	else if (row != 3 && col == 4)
		dfs(map_arr, row + 1, 0);
	else
		check_required_conditions(map_arr, row, col);
}

void	check_required_conditions(int **map_arr, int row, int col)
{
	int box_size;

	box_size = 1;
	while (box_size <= g_size)
	{
		map_arr[row][col] = box_size;
		if (is_possible_row(map_arr, row, col)
		&& is_possible_col(map_arr, row, col))
		{
			if (row == 3)
			{
				if (check_col_exception(map_arr, col))
					dfs(map_arr, row, col + 1);
			}
			else if (col == 3)
			{
				if (check_row_exception(map_arr, row))
					dfs(map_arr, row, col + 1);
			}
			else
				dfs(map_arr, row, col + 1);
		}
		box_size++;
	}
}
