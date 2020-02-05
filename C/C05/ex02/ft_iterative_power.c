/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spectator05 <spectator05@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:15:07 by spectator05       #+#    #+#             */
/*   Updated: 2020/02/05 12:27:32 by spectator05      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    if ((nb == 0 && power !=0) || power < 0)
        return (0);
    if (power == 0)
        return (1);
	while (0 < --power)
		nb *= nb;
	return (nb);
}
