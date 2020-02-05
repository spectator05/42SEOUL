/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spectator05 <spectator05@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:34:03 by spectator05       #+#    #+#             */
/*   Updated: 2020/02/05 10:54:30 by spectator05      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 46)
		return (0);
	return (ft_recursive_factorial(nb - 1) + ft_recursive_factorial(nb - 2));
}
