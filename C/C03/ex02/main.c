/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 00:42:04 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 10:43:08 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char buffer1[40] = "123";
	char buffer2[40] = "123";
	char *ptr1;
	char *ptr2;

	ptr1 = strcat(buffer1, "456");
	ptr2 = ft_strcat(buffer2, "456");
	printf("buffer1 = %s, ptr1 = %s\n", buffer1, ptr1);
	printf("buffer2 = %s, ptr2 = %s\n", buffer2, ptr2);
}