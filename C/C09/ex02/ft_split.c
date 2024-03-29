/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:40:36 by wjang             #+#    #+#             */
/*   Updated: 2020/02/13 21:01:18 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	return (cnt + 1);
}

int		is_char(char *str, char *charset, int i)
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

int		findout_wordlen(char *str, char *charset, int i)
{
	int j;

	j = 0;
	i++;
	while (!is_char(str, charset, i) && !str[i])
		i++;
	return (i - j);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		arr_size;
	int		*arr_cnt;
	int		i;
	int		j;

	arr_size = count_arr(str, charset);
	arr = (char **)malloc(sizeof(char *) * (arr_size + 1));
	arr_cnt = (int *)malloc(sizeof(int) * (arr_size));
	i = 0;
	j = 0;
	while (i < arr_size)
	{
		if (is_char(str, charset, j) || j == 0)
		{
			if (j == 0 || is_char(str, charset, j - 1))
			{
				arr_cnt[i] = findout_wordlen(str, charset, j);
				j += arr_cnt[i];
			}
			else
				j++;
		}
		i++;
	}
	i = 0;
	printf("arrsize : %d\n", arr_size);
	while (i < arr_size)
	{
		printf("arr[%d] count : %d\n", i, arr_cnt[i]);
		i++;
	}

}

int main(int argc, char **argv)
{
	char **arr;
	arr = ft_split(argv[1], argv[argc - 1]);
}
