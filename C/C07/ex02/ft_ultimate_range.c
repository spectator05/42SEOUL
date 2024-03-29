/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:49:16 by wjang             #+#    #+#             */
/*   Updated: 2020/02/11 03:48:45 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	size;
	int				*arr;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	if ((arr = (int *)malloc(sizeof(int) * size)) == NULL)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
