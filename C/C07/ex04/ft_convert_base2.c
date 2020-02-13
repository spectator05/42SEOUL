/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:13:15 by wjang             #+#    #+#             */
/*   Updated: 2020/02/13 21:11:30 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_valid_notation(char *str)
{
	int	i;
	int	j;

	if (!str || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13)
	|| str[i] == 32)
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

void	figure_out_negative(char *str, int *len, int *negative)
{
	while (str[*len] == '-' || str[*len] == '+')
	{
		if (str[(*len)++] == '-')
			*negative *= -1;
	}
}

int		search_base(char *str, int i, char *base, int *j)
{
	while (base[*j] && (base[*j] != str[i]))
		(*j)++;
	if (base[*j] == '\0')
		return (-1);
	return (*j);
}

int		calc_int(char *str, int i, char *base)
{
	int rtn_i;
	int j;
	int len;

	len = check_valid_notation(base);
	if (!len)
	{
		return (0);
	}
	j = 0;
	rtn_i = 0;
	while (search_base(str, i, base, &j) != -1
	&& !((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' ||
	str[i] == '+' || str[i] == '-'))
	{
		rtn_i = (rtn_i * len) + j;
		j = 0;
		i++;
	}
	return (rtn_i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int negative;

	i = 0;
	negative = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	figure_out_negative(str, &i, &negative);
	return (negative * calc_int(str, i, base));
}
