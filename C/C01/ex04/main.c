/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:58:38 by wjang             #+#    #+#             */
/*   Updated: 2020/01/26 20:25:59 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int i1;
	int i2;

	i1 = 32;
	i2 = 5;
	printf("i1 = %d, i2 = %d\n", i1, i2);
	ft_ultimate_div_mod(&i1, &i2);
	printf("div to i1, mod to i2\ni1 = %d, i2 = %d", i1, i2);
}
