/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:13:30 by wjang             #+#    #+#             */
/*   Updated: 2020/02/13 21:13:56 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
int		calc_int(char *str, int i, char *base);
int		search_base(char *str, int i, char *base, int *j);
void	figure_out_negative(char *str, int *len, int *negative);
int		check_valid_notation(char *str);

int g_idx;

int		check_valid_notation2(char *str)
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

void	translate(int nb, char *str, unsigned int str_length, char *res)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		nbr = nb * -1;
		res[g_idx++] = '-';
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		translate(nbr / str_length, str, str_length, res);
	res[g_idx++] = str[nbr % str_length];
}

int	ft_putnbr_base(char *res, int nbr, char *str)
{
	unsigned int	str_len;

	str_len = 2;
	str_len = check_valid_notation2(str);
	if (str_len)
	{
		g_idx = 0;
		translate(nbr, str, str_len, res);
		return (1);
	}
	return (0);
}

/*
void	ft_putnbr(int nb, char *res, int idx)
{
	char		c;
	long long	i;

	i = (long long)nb;
	if (i < 0)
	{
		res[idx++] = '-';
		i *= -1;
	}
	if (0 <= i && i < 10)
	{
		c = i + '0';
		res[idx] = c;
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
*/
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (!nbr || nbr[0] == '\0' || !base_from || base_from[0] == '\0'
	|| !base_to || base_to[0] == '\0')
		return (0);
	i = ft_atoi_base(nbr, base_from);
	j = 10;
	k = 1;
	while (i / j != 0)
	{
		j++;
		k++;
	}
	res = (char *)malloc(sizeof(char) * (k + 1));
	if (!ft_putnbr_base(res, i, base_to))
		return (0);
	return (res);
}

int	main(int argc, char **argv)
{
	char *nbr;

	nbr = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s", nbr);
}
