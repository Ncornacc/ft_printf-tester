#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncornacc <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/03 17:03:54 by ncornacc      #+#    #+#                  #
#    Updated: 2022/10/06 08:04:44 by ncornacc      ########   odam.nl          #
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
	${CC}	${FLAG} test.c ${NAME} -o exe

all:	${NAME}

%.o:		%.c
	${CC} ${FLAG} -c $^

dio:
	rm *~
	rm *.out

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}
	${RM} exe

re:		fclean all

.PHONY:		all clean fclean re