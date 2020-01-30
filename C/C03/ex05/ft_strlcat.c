/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 06:46:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 10:40:27 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;

	dest_len = ft_sizeof(dest);
	src_len = ft_sizeof(src);
	i = 0;
	if (size >= dest_len + 1)
		while (i < size - dest_len - 1 && src[i])
		{
			dest[dest_len + i] = src[i];
			++i;
		}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	return (src_len + dest_len);
}
