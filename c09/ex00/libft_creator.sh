#! /bin/sh

FILES='ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c'
LIBRARY='libft.a'

gcc -Wall -Wextra -Werror -c ${FILES} && ar -r ${LIBRARY} ${FILES//.c/.o}
