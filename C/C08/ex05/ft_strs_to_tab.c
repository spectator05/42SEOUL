/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 03:17:31 by wjang             #+#    #+#             */
/*   Updated: 2020/02/09 11:47:41 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	char	*res;
	int		size;

	size = 0;
	while (src[size])
		++size;
	res = (char *)malloc((sizeof(char) * size + 1));
	size = 0;
	while (src[size])
	{
		res[size] = src[size];
		size++;
	}
	res[size] = src[size];
	return (res);
}

int					ft_strlen(char *str)
{
	int idx;

	idx = 0;
	while (*str != '\0')
	{
		idx++;
		str++;
	}
	return (idx);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*struct_argv;
	int			i;

	if ((struct_argv = (t_stock_str *)
	malloc(sizeof(t_stock_str) * (argc + 1))) == NULL)
		return (0);
	i = 0;
	while (argv[i] && i < argc)
	{
		struct_argv[i].str = argv[i];
		struct_argv[i].copy = ft_strdup(argv[i]);
		struct_argv[i].size = ft_strlen(argv[i]);
		i++;
	}
	struct_argv[i].str = 0;
	struct_argv[i].copy = 0;
	struct_argv[i].size = 0;
	return (struct_argv);
}
