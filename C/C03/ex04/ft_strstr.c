/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 02:14:33 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 04:44:59 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_str(char *str, char *to_find)
{
	int j;

	j = 1;
	str++;
	while (*str == to_find[j] && to_find[j])
	{
		j++;
		str++;
	}
	if (!to_find[j])
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			if (find_str(str, to_find))
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
