/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 13:52:23 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 15:24:49 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	input_charint(char *str, int *i, int *len, int *ilen)
{
	while (str[*len] >= '0' && str[*len] <= '9')
	{
		i[(*ilen)++] = str[(*len)++];
	}
}

void	figure_out_negative(char *str, int *len, int *negative)
{
	while (str[*len] == '-' || str[*len] == '+')
	{
		if (str[(*len)++] == '-')
			*negative *= -1;
	}
}

int		calc_int(int *i, int *ilen, int *negative, int *tens)
{
	int rtn_i;

	rtn_i = 0;
	while (*ilen != -1)
	{
		rtn_i += (*negative) * (*tens) * (i[(*ilen)--] - '0');
		*tens *= 10;
	}
	return (rtn_i);
}

int		ft_atoi(char *str)
{
	int len;
	int negative;
	int i[11];
	int ilen;
	int tens;

	len = 0;
	negative = 1;
	while ((str[len] >= 9 && str[len] <= 13) || str[len] == ' ')
	{
		++len;
	}
	figure_out_negative(str, &len, &negative);
	ilen = 0;
	input_charint(str, i, &len, &ilen);
	tens = 1;
	ilen -= 1;
	return (calc_int(i, &ilen, &negative, &tens));
}
