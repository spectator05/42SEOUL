/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:57:37 by wjang             #+#    #+#             */
/*   Updated: 2020/02/12 23:26:46 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(int *str, int n)
{
	char c;

	while (0 < n)
	{
		c = str[n - 1] + '0';
		write(1, &c, 1);
		n--;
	}
}

void	ft_plus(int *str, int i, int n)
{
	int j;

	if (str[i] == 9 - i)
		ft_plus(str, i + 1, n);
	else if (i != 0)
	{
		str[i] += 1;
		j = 1;
		while (i - j >= 0)
		{
			str[i - j] = str[i] + j;
			j++;
		}
	}
	else
		str[i] += 1;
}

void	recursive(int *str, int n)
{
	int		i;

	i = 1;
	ft_putstr(str, n);
	write(1, ", ", 2);
	ft_plus(str, 0, n);
	if (str[n - 1] != 10 - n)
		recursive(str, n);
	else
		ft_putstr(str, n);
}

void	ft_print_combn(int n)
{
	int		i;
	char	j;
	int		str[10];

	i = 0;
	while (i < 10)
		str[i++] = 0;
	i = 0;
	while (i < n)
	{
		j = n - 1 - i;
		str[i] += j;
		i++;
	}
	recursive(str, n);
}
