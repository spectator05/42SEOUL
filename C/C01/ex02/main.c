/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:27:45 by wjang             #+#    #+#             */
/*   Updated: 2020/01/26 17:35:50 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int i1;
	int i2;

	i1 = 10;
	i2 = -10;
	printf("i1 : %d, i2 : %d\n", i1, i2);
	ft_swap(&i1, &i2);
	printf("i1 : %d, i2 : %d", i1, i2);
}