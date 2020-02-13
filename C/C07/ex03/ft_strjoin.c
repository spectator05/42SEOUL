/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:27:51 by wjang             #+#    #+#             */
/*   Updated: 2020/02/12 18:11:58 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int				ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

int				alloc_size(int size, char **strs, char *sep)
{
	int i;
	int len;

	len = 0;
	i = 0;
	len += ft_strlen(sep) * (size - 1);
	while (i < size)
		len += ft_strlen(strs[i++]);
	return (len + 1);
}

void			init_str(char **strs, char *str, char *sep)
{
	int		i;
	int		j;
	int		str_i;

	i = 0;
	str_i = 0;
	while (strs[i])
	{
		if (i != 0)
		{
			j = 0;
			while (sep[j])
				str[str_i++] = sep[j++];
		}
		j = 0;
		while (strs[i][j])
			str[str_i++] = strs[i][j++];
		i++;
	}
	str[str_i] = '\0';
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		arr_size;

	if (size <= 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = 0;
		return (str);
	}
	arr_size = alloc_size(size, strs, sep);
	str = ((char *)malloc(sizeof(char) * arr_size));
	if (strs[0][0] != '\0' && size != 0)
		init_str(strs, str, sep);
	return (str);
}
