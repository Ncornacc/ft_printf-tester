#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncornacc <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/03 17:03:54 by ncornacc      #+#    #+#                  #
#    Updated: 2022/10/07 10:51:53 by ncornacc      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

SRCS	:=	ft_*.c

RM		:=	rm	-f

NAME	:=	libft.a

FLAG	:=	-Wall -Werror -Wextra

CC		:=	gcc

OBJS	:=	${SRCS:.c=.o}

AR		:=	ar	-rc

${NAME}:	${OBJS}
	${AR}	$@	$^
	${RM}	${OBJS}

all:	${NAME}

%.o:		%.c
	${CC} ${FLAG} -c $^

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re