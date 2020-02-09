/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:09:19 by wjang             #+#    #+#             */
/*   Updated: 2020/02/09 03:33:49 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		size;

	size = 0;
	while (src[size])
		++size;
	res = (char *)malloc((sizeof(char) * size + 1));
	size = 0;
	while (src[size])
	{
		res[size] = src[size];
		size++;
	}
	res[size] = src[size];
	return (res);
}
