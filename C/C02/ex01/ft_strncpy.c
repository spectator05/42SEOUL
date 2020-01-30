/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 21:43:48 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 20:29:33 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int i)
{
	unsigned int idx;

	idx = 0;
	while (idx < i && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		++idx;
	}
	while (idx < i)
		dest[idx++] = '\0';
	return (dest);
}
