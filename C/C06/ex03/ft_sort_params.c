/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 20:48:49 by wjang             #+#    #+#             */
/*   Updated: 2020/02/07 02:04:24 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare_ascii(char *c1, char *c2)
{
	int i;

	i = 0;
	while (c1[i] || c2[i])
	{
		if (c1[i] > c2[i])
			return (0);
		else if (c1[i] < c2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, int i, int min)
{
	char *temp;

	temp = a[i];
	a[i] = a[min];
	a[min] = temp;
}

void	print_params(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_sort_params(char **tab, int size)
{
	int i;
	int j;
	int min;

	i = 1;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (compare_ascii(tab[j], tab[min]))
				min = j;
			j++;
		}
		ft_swap(tab, i, min);
		print_params(tab[i]);
		write(1, &"\n", 1);
		i++;
	}
	print_params(tab[i]);
	write(1, &"\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 1)
		ft_sort_params(argv, argc);
	return (0);
}
