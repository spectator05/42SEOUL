/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:01:00 by wjang             #+#    #+#             */
/*   Updated: 2020/01/28 22:00:45 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(char c)
{
	char			*hex;
	unsigned char	uc;

	uc = (unsigned)c;
	hex = "0123456789abcdef";
	if (uc >= 16)
		write(1, &hex[uc / 16], 1);
	else
		write(1, &"0", 1);
	write(1, &hex[uc % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else if (str[i] == 0)
			write(1, &"\00", 2);
		else
		{
			write(1, &"\\", 1);
			hex(str[i]);
		}
		i++;
	}
}
