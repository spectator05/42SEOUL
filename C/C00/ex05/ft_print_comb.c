/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:48:01 by wjang             #+#    #+#             */
/*   Updated: 2020/01/25 17:18:24 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_number(char c1, char c2, char c3);
void	ft_print_comb(void);
void	ft_carc_comb(char units, char tens, char thous);

void	ft_put_number(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	if (c3 != 's')
	{
		write(1, &c3, 1);
	}
	write(1, &",", 1);
	write(1, &" ", 1);
}

void	ft_print_comb(void)
{
	char units;
	char tens;
	char thous;

	units = '2';
	tens = '1';
	thous = '0';
	ft_carc_comb(units, tens, thous);
	write(1, &"7", 1);
	write(1, &"8", 1);
	write(1, &"9", 1);
}

void	ft_carc_comb(char units, char tens, char thous)
{
	while (thous != '7' || tens != '8' || units != '9')
	{
		ft_put_number(thous, tens, units);
		if (units == '9')
		{
			if (tens == '8')
			{
				if (thous != '7')
				{
					tens = ++thous + 1;
					units = tens + 1;
				}
			}
			else
			{
				units = ++tens + 1;
			}
		}
		else
		{
			units++;
		}
	}
}
