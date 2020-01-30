/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:29:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 15:59:01 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int i);

int		main(void)
{
	char str1[13] = "Hello World!";
	char str2[6];

	ft_strncpy(str2, str1, 5);
	printf("copied Hello World!, 5 characters : %s", str2);
}
