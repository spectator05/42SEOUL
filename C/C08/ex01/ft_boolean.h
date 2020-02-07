/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjang <wjang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:10:26 by wjang             #+#    #+#             */
/*   Updated: 2020/02/07 22:46:36 by wjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define TRUE		1
# define FALSE		0
# define SUCCESS	0

# define EVEN(X)	(X % 2 == 0) ? TRUE : FALSE)

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

void		ft_putstr(char *str);
t_bool		ft_is_even(t_bool nbr);

#endif
