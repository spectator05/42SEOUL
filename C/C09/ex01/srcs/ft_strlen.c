/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 18:25:24 by wjang             #+#    #+#             */
/*   Updated: 2020/02/11 21:36:49 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while (*str != '\0')
	{
		idx++;
		str++;
	}
	return (idx);
}
