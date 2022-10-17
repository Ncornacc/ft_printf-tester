#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ncornacc <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 11:34:20 by ncornacc      #+#    #+#                  #
#    Updated: 2022/10/17 13:38:15 by ncornacc      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

####VARIABLES####

NAME	:=	libftprintf.a

INCLUDE	:=	-I include

FILE	:=	ft_printf ft_putfunc ft_functions ft_putnbr_u

OBJ_DIR	:=	obj/

SRC_DIR	:=	src/

SRC		:=	${addprefix ${SRC_DIR}, ${addsuffix .c, ${FILE}}}

OBJ		:=	${addprefix ${OBJ_DIR}, ${addsuffix .o, ${FILE}}}

LIBFT	:=	libft

ARR		:=	ar -rcs

CC		:=	gcc

FLAGS	:=	-Wall -Werror -Wextra

RM		:=	rm	-rf

##############

####COLORS####

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m

##############

####RULES####

all:	${NAME}

${NAME}: ${OBJ_DIR}	${OBJ}
	${ARR} ${NAME} ${OBJ}
	@echo "${GREEN} libftprintf.a compiled!${DEF_COLOR}"

${OBJ_DIR}%.o: ${SRC_DIR}%.c
	@echo	"${YELLOW} Compiling: $^ ${DEF_COLOR}"
	${CC} ${FLAGS} ${INCLUDE} -c $< -o $@

${OBJ_DIR}:
	mkdir -p $@

clean:
	${RM} ${OBJ_DIR} ${OBJ} 
	@echo "${MAGENTA} Object files cleaned!${DEF_COLOR}"

fclean: clean
	${RM}	${NAME}
	@echo  "${MAGENTA} executable/archive files cleaned!${DEF_COLOR}"

re:	fclean all
	@echo	"${GREEN} Cleaned and rebuild everything for ft_print!${DEF_COLOR}:"

.PHONY:	re all fclean clean