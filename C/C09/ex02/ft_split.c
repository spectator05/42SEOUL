/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:40:36 by wjang             #+#    #+#             */
/*   Updated: 2020/02/11 22:10:26 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(char *str, char *charset)
{
	int i;
	int j;
	int cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j] && i != 0 && str[i + 1] != '\0')
				cnt++;
			j++;
 		}
		i++;
	}
	return (cnt + 1);
}

int	get_str_size(char *str, char *charset, int i)
{
	int j;

	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j++] || str[i] == '\0')
				return (i);
		}
		i++;
	}
}
char **arr_alloc_init(char *str, char *charset, char **arr, int size)
{
	int i;
	int j;
	int k;
	int arr_size;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		arr_size = get_str_size(str, charset, j) - j + 1;
		if (j == 0 || str[j + arr_size] == '\0')
			*arr = (char *)malloc(sizeof(char) * (arr_size + 2));
		else
			*arr = (char *)malloc(sizeof(char) * (arr_size + 3));
		{
		while (j < j + arr_size)
			arr[i][k++] = str[j];
		i++;
	}
}

char **ft_split(char *str, char *charset)
{
	char	**arr;
	int		size;
	int		i;
	int		j;
	int		arr_size;

	size = get_size(str, charset);
	if ((arr = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (0);
	arr[size] = 0;
	arr_alloc_init(str, charset, arr, size);
}
