/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:57:37 by wjang             #+#    #+#             */
/*   Updated: 2020/02/13 00:54:05 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_number(int i)
{
	char c;

	if (i >= 10)
	{
		c = i / 10 + '0';
		write(1, &c, 1);
		c = i % 10 + '0';
	}
	else
	{
		write(1, "0", 1);
		c = i + '0';
	}
	write(1, &c, 1);
}

void	ft_print_comb(int i, int j)
{
	if (i != 0)
		ft_print_comb(i - 1, i);
	while (j <= 99)
	{
		ft_put_number(i);
		write(1, " ", 1);
		ft_put_number(j);
		if (i != 98 || j != 99)
			write(1, ", ", 2);
		j++;
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb(98, 99);
}

int	main()
{
	ft_print_comb2();
}
