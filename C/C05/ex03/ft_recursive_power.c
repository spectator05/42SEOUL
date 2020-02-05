/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 00:39:48 by wjang             #+#    #+#             */
/*   Updated: 2020/02/06 04:42:20 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
