/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:18:50 by wjang             #+#    #+#             */
/*   Updated: 2020/01/26 20:24:23 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int i;

	i = 0;
	printf("int i = %d\n", i);
	ft_ft(&i);
	printf("transform to 42, int i = %d", i);
}
