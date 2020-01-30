/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:29:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 17:41:02 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str1[] = "Hello World!";

	printf("%s : %d\n", str1, ft_str_is_printable(str1));

	char str2[] = "�";
	
	printf("%s : %d", str2, ft_str_is_printable(str2));
}
