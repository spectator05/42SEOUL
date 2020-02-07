/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 23:06:26 by wjang             #+#    #+#             */
/*   Updated: 2020/02/06 23:09:26 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb)
{
	char		c;
	long long	i;

	i = (long long)nb;
	if (i < 0)
	{
		write(1, &"-", 1);
		i *= -1;
	}
	if(0 <= i && i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}

}
