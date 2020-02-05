/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 03:04:05 by wjang             #+#    #+#             */
/*   Updated: 2020/02/06 04:43:54 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i < nb / i)
		i++;
	return (i);
}

int	ft_find_next_prime(int nb)
{
	int sqrt;
	int i;

	if (nb < 2)
		return (2);
	else if (nb == 2)
		return (2);
	i = 3;
	sqrt = ft_sqrt(nb);
	while (i - 1 != sqrt)
	{
		sqrt = ft_sqrt(nb);
		i = 2;
		while (i <= sqrt && (nb % i) != 0)
		{
			i++;
		}
		nb++;
	}
	return (nb - 1);
}
