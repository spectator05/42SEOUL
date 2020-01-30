/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:29:59 by wjang             #+#    #+#             */
/*   Updated: 2020/01/27 20:45:37 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "_hello wo9rld!";
	printf("_hello wo9rld! : %s\n", ft_strcapitalize(str1));
	char str2[] = "hELLO*wO9RLD!";
	printf("hELLO*wO9RLD : %s\n", ft_strcapitalize(str2));
}
