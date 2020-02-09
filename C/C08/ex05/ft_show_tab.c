/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:46:54 by wjang             #+#    #+#             */
/*   Updated: 2020/02/09 04:25:48 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void		ft_putstr(char *str)
{
	int i;

	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

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
	if (0 <= i && i < 10)
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

void		ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
