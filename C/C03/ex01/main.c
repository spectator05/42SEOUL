/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:29:48 by wjang             #+#    #+#             */
/*   Updated: 2020/01/30 12:11:49 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char str1[] = "88888888";
    char str2[] = "88888888";
    printf("compare 8 :%s : %s => %d\n", str1, str2, ft_strncmp(str1, str2, 8));
    printf("compare 8 :%s : %s => %d\n", str1, str2, strncmp(str1, str2, 8));

    char str3[] = "87";
    char str4[] = "81888888";
    printf("compare 2 :%s : %s => %d\n", str3, str4, ft_strncmp(str3, str4, 2));
    printf("compare 2 :%s : %s => %d\n", str3, str4, strncmp(str3, str4, 2));

    char str5[] = "1";
    char str6[] = "1";
    printf("compare 3 :%s : %s => %d\n", str5, str6, ft_strncmp(str5, str6, 3));
    printf("compare 3 :%s : %s => %d\n", str5, str6, strncmp(str5, str6, 3));
        
    char str7[] = "1";
    char str8[] = "";
    printf("compare 0 :%s : %s => %d\n", str7, str8, ft_strncmp(str7, str8, 0));
    printf("compare 0 :%s : %s => %d\n", str7, str8, strncmp(str7, str8, 0));
        
    char str9[] = "";
    char str10[] = "";
    printf("compare 1 :%s : %s => %d\n", str9, str10, ft_strncmp(str9, str10, 1));
    printf("compare 1 :%s : %s => %d", str9, str10, strncmp(str9, str10, 1));
}
