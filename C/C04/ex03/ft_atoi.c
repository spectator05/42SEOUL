/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:52:23 by wjang             #+#    #+#             */
/*   Updated: 2020/02/04 16:26:06 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	figure_out_negative(char *str, int *len, int *negative)
{
	while (str[*len] == '-' || str[*len] == '+')
	{
		if (str[(*len)++] == '-')
			*negative *= -1;
	}
	if (str[*len] < '0' || str[*len] > '9')
		return (0);
	return (1);
}

int	calc_int(char *str, int *len)
{
	int rtn_i;

	rtn_i = str[*len] - '0';
	while (str[++(*len)] >= '0' && str[*len] <= '9')
	{
		rtn_i = (rtn_i * 10) + (int)str[*len] - '0';
	}
	return (rtn_i);
}

int	ft_atoi(char *str)
{
	int len;
	int negative;

	len = 0;
	negative = 1;
	while ((str[len] >= 9 && str[len] <= 13) || str[len] == ' ')
	{
		++len;
	}
	if (str[len] != '-' && str[len] > '+')
		return (0);
	if (!figure_out_negative(str, &len, &negative))
		return (0);
	return (negative * calc_int(str, &len));
}
