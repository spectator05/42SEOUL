/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:29:48 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 10:50:31 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "88888888";
    char str2[] = "88888887";
    printf("compare %s : %s => %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("compare %s : %s => %d\n", str1, str2, strcmp(str1, str2));

    char str3[] = "7777777";
    char str4[] = "88888888";
    printf("compare %s : %s => %d\n", str3, str4, ft_strcmp(str3, str4));
    printf("compare %s : %s => %d\n", str3, str4, strcmp(str3, str4));

    char str5[] = "";
    char str6[] = "1";
    printf("compare %s : %s => %d\n", str5, str6, ft_strcmp(str5, str6));
    printf("compare %s : %s => %d\n", str5, str6, strcmp(str5, str6));

    char str7[] = "1";
    char str8[] = "";
    printf("compare %s : %s => %d\n", str7, str8, ft_strcmp(str7, str8));
    printf("compare %s : %s => %d\n", str7, str8, strcmp(str7, str8));
    
    char str9[] = "";
    char str10[] = "";
    printf("compare %s : %s => %d", str9, str10, ft_strcmp(str9, str10));
    printf("compare %s : %s => %d", str9, str10, strcmp(str9, str10));
}