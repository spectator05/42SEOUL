/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:29:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 17:37:47 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str1[] = "Hello World!";

	printf("%s : %d\n", str1, ft_str_is_uppercase(str1));

	char str2[] = "HELLOWORLD";
	
	printf("%s : %d", str2, ft_str_is_uppercase(str2));
}
