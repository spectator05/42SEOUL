/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 00:34:33 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 01:55:34 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	j = 0;
	while (*src != '\0' && j < nb)
	{
		*dest++ = *src++;
		i++;
		j++;
	}
	*dest = '\0';
	while (i != 0)
	{
		dest--;
		i--;
	}
	return (dest);
}
