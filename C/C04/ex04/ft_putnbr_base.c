/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 10:40:34 by wjang             #+#    #+#             */
/*   Updated: 2020/02/04 12:00:07 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_valid_notation(char *str)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			++j;
		}
		++i;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	translate(int nb, char *str, unsigned int str_length)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		write(1, &"-", 1);
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		translate(nbr / str_length, str, str_length);
	write(1, &str[nbr % str_length], 1);
}

void	ft_putnbr_base(int nbr, char *str)
{
	unsigned int	str_len;

	str_len = 2;
	str_len = check_valid_notation(str);
	if (str_len)
		translate(nbr, str, str_len);
}