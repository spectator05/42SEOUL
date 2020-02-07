/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:27:51 by wjang             #+#    #+#             */
/*   Updated: 2020/02/07 15:33:38 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

unsigned int	all_char(int size, char **strs, char *sep)
{
	int				i;
	int				j;
	unsigned int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		if (j != 0)
			cnt += j;
		i++;
	}
	return (cnt);
}

void			put_str(char *str, char *strs, int *i)
{
	int j;

	j = 0;
	write(1, "7", 1);
	while (str[j] != '\0')
	{
		str[*i++] = strs[j++];
	}
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	strs_cnt;
	unsigned int	sep_len;
	char			*str;
	int				i;
	int				j;

	if (size == 0)
	{
		return ("\0");
	}
	write(1, "1", 1);
	strs_cnt = all_char(size, strs, sep);
	write(1, "2", 1);
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	write(1, "3", 1);
	str = (char *)malloc(sizeof(char) * (strs_cnt + sep_len * (size - 1) + 1));
	write(1, "4", 1);
	j = 0;
	while (j < size)
	{
		write(1, "5", 1);
		put_str(str, strs[j], &i);
		put_str(str, sep, &i);
		j++;
	}
	put_str(str, strs[j], &i);
	str[i] = '\0';
	write(1, "6", 1);
	return (str);
}
