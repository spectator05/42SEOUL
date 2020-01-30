/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 00:42:04 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 10:42:10 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char buffer1[40] = "555";
	char buffer2[40] = "555";
	char *ptr1;
	char *ptr2;

	ptr1 = strncat(buffer1, "1213", 2);
	ptr2 = ft_strncat(buffer2, "1213", 2);
	printf("buffer1 = %s, ptr1 = %s\n", buffer1, ptr1);
	printf("buffer2 = %s, ptr2 = %s\n", buffer2, ptr2);
}