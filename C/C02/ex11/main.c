/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:18:42 by wjang             #+#    #+#             */
/*   Updated: 2020/01/28 22:00:54 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char j;
	j = 1;
	char input_str[256];
	for(int i = 0; i < 256; i++)
		input_str[i] = j + i;
	printf("original : %s\n\n\n", input_str);
	ft_putstr_non_printable(input_str);
}
