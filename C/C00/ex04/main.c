/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:38:14 by wjang             #+#    #+#             */
/*   Updated: 2020/01/23 21:46:04 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern void  ft_is_negative(int);

int main(void)
{
     printf("input : 3, -3, 0 \n");
     ft_is_negative(3);
     ft_is_negative(-3);
     ft_is_negative(0);
}
