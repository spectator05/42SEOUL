/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:41:48 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 20:44:41 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		judge_alphabet_num(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
	{
		if (*str > 96 && *str < 123)
			*str = *str - 32;
	}
	i = 1;
	if (str[i - 1] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = i - 1;
		if (judge_alphabet_num(str[j]))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		else if ((str[i] > 64 && str[i] < 91))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
