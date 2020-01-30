/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 02:11:26 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 10:41:20 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *string1 = "1231231234";
	char *string2 = "1231231234";
	char *tofind = "1234";
	printf("%s, %s : %s\n", string1, tofind, strstr(string1, tofind));
	printf("%s, %s : %s\n", string2, tofind, ft_strstr(string2, tofind));
}