/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 02:41:56 by wjang             #+#    #+#             */
/*   Updated: 2020/02/06 04:43:27 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i < nb / i)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int sqrt;
	int i;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
