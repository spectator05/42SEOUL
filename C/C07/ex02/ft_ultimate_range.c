/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:49:16 by wjang             #+#    #+#             */
/*   Updated: 2020/02/07 12:48:58 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	size;
	int				*arr;

	write(1, "1", 1);
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	write(1, "2", 1);
 	size = max - min - 1;
	if ((arr = (int *)malloc(sizeof(int) * size)) == NULL)
	{
		*range = 0;
		return (-1);
	}
	write(1, "3", 1);
	*range = arr;
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	write(1, "4", 1);
	return (size);
}
