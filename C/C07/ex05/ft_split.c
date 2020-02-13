/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:56:50 by wjang             #+#    #+#             */
/*   Updated: 2020/02/13 20:14:23 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	g_str_size;
int g_arr_i;

int		count_arr(char *str, char *charset)
{
	int i;
	int j;
	int cnt;
	int flag;

	cnt = 0;
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		flag = 0;
		while (charset[j] != 0 && flag == 0)
		{
			if (str[i] == charset[j] && str[i - 1] != charset[j]
			&& i != 0 && str[i + 1] != 0)
			{
				cnt++;
				flag = 1;
			}
			j++;
		}
		i++;
	}
	return (cnt);
}

char	is_charset(char *str, char *charset, int i)
{
	int j;

	j = 0;
	while (charset[j])
	{
		if (str[i] == charset[j++])
			return (1);
	}
	return (0);
}

void	find_word_end(char *str, char *charset, int *j)
{
	while (!(is_charset(str, charset, *j)) && str[*j])
	{
		(*j)++;
	}
}

void	init_arr(char **arr, int *i, char *str, char *charset)
{
	int	idx;
	int	k;
	int j;
	int	size;

	find_word_end(str, charset, &j);
	size = j - *i;
	if (is_charset(str, charset, j))
		size++;
	if (is_charset(str, charset, *i))
		size++;
	arr[g_arr_i] = (char *)malloc(sizeof(char) * (size + 1));
	k = 0;
	if (is_charset(str, charset, *i))
		arr[g_arr_i][k++] = str[(*i)++];
	while (*i < j)
		arr[g_arr_i][k++] = str[(*i)++];
	if (is_charset(str, charset, j))
		arr[g_arr_i][k] = str[*i];
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		arr_size;
	int		i;
	int		k;
	int		*cnt_arr;

	g_str_size = 0;
	while (str[g_str_size])
		g_str_size++;
	arr_size = count_arr(str, charset);
	arr = (char **)malloc(sizeof(char *) * (arr_size + 1));
	cnt_arr = (int *)malloc(sizeof(int) * (arr_size + 1));
	i = 0;
	while(i < arr_size)
		cnt_arr[i] = 0;
	i = 0;
	g_arr_i = 0;
	printf("g_str_size : %d", g_str_size);
	while (i < g_str_size)
	{
		init_arr(arr, &i, str, charset);
		g_arr_i++;
	}
	return (arr);
}

int main(int argc, char **argv)
{
	char	**arr;
	int		i;

	arr = ft_split(argv[1], argv[argc - 1]);
}
