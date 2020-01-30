/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:17:26 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 13:51:27 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;
	if (0 <= nb && nb < 10)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-1 * (nb / 10));
		ft_putnbr(-1 * (nb % 10));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}