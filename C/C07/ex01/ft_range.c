/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 03:29:08 by wjang             #+#    #+#             */
/*   Updated: 2020/02/11 04:03:04 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*arr;
	unsigned int	i;
	unsigned int	size;

	if (max <= min)
	{
		arr = 0;
		return (NULL);
	}
	size = max - min;
	if ((arr = (int *)malloc(sizeof(int) * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
