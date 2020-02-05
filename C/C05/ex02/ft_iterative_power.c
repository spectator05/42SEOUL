/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:15:07 by spectator05       #+#    #+#             */
/*   Updated: 2020/02/06 04:41:29 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (0 < --power)
		i *= nb;
	return (i);
}
