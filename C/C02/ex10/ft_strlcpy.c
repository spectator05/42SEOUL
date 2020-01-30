/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:00:26 by wjang             #+#    #+#             */
/*   Updated: 2020/01/28 21:59:40 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	unsigned int idx;

	len = 0;
	idx = 0;
	while (src[len] != '\0')
		++len;
	if (size == 0)
		return (len);
	while (src[idx] != '\0' && idx < (size - 1))
	{
		dest[idx] = src[idx];
		++idx;
	}
	dest[idx] = '\0';
	return (len);
}
