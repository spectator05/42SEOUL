/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 18:27:36 by wjang             #+#    #+#             */
/*   Updated: 2020/01/26 18:34:54 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str1;
	char *str2;
	char *str3;
	
	str1 = "Hello World!";
	str2 = "adjkfgbdahbgdgbdhgbsdhgbdshgbdsgkbsdhgbsdh";
	str3 = "";

	printf("Hello World! : %d\n", ft_strlen(str1));

	printf("adjkfgbdahbgdgbdhgbsdhgbdshgbdsgkbsdhgbsdh : %d\n", ft_strlen(str2));

	printf("'' : %d", ft_strlen(str3));
}
