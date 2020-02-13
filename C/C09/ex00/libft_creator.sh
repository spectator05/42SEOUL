# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 11:22:06 by wjang             #+#    #+#              #
#    Updated: 2020/02/12 11:25:27 by wjang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_strlen.c ft_swap.c ft_strcmp.c ft_putstr.c   // gcc 플래그 삭제하여 기계맘 알아주기
ar rc libft.a ft_putchar.o ft_strlen.o ft_swap.o ft_strcmp.o ft_putstr.o
ranlib libft.a   // delete for pass
