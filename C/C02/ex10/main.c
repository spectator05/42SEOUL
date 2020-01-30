/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:29:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/28 22:00:04 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char str1[12] = "0dcbsidwhiu";
	
	char str2[12];
	char str3[12];

	ft_strlcpy(str2, str1, 0);
	printf("copied size : 0\n0dcbsidwhiu : %s\n return : %d", str2, ft_strlcpy(str2, str1, 0));
	strlcpy(str3, str1, 0);
	printf("\n%s : %lu\n",str3, strlcpy(str3, str1, 0));
}
