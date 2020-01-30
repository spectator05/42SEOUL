/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:44:27 by wjang             #+#    #+#             */
/*   Updated: 2020/01/26 17:50:23 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int i1;
	int i2;
	int div_res;
	int mod_res;

	i1 = 32;
	i2 = 5;
	printf("i1 : %d, i2 : %d\n", i1, i2);
	ft_div_mod(i1, i2, &div_res, &mod_res);
	printf("div : %d, mod : %d\n", div_res, mod_res);
}
