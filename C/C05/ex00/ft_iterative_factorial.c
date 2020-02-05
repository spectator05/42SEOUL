/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spectator05 <spectator05@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:06:58 by spectator05       #+#    #+#             */
/*   Updated: 2020/02/05 10:48:06 by spectator05      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n_1;
	int n_2;
	int temp;
	int i;

	i = 2;
	n_1 = 1;
	n_2 = 0;
	if (nb <= 0 || nb > 46)
		return (0);
	while (i <= nb + 1)
	{
		temp = n_1 + n_2;
		n_2 = n_1;
		n_1 = temp;
		++i;
	}
	return (n_2);
}
