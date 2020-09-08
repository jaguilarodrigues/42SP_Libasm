# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/01 18:57:54 by jaqrodri          #+#    #+#              #
#    Updated: 2020/09/08 17:07:59 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libasm.a

INCLUDE_DIR	=	./include
INCLUDE		=	${INCLUDE_DIR}/libasm.h

ASM 		=	nasm

ASM_FLAG	=	-f elf64

SRC_DIR		=	./src
SRC			=	${SRC_DIR}/ft_hello.s \
				${SRC_DIR}/ft_strlen.s

OBJ_DIR		=	./objects
OBJ			=	$(patsubst ${SRC_DIR}/%.s, ${OBJ_DIR}/%.o, ${SRC})

${OBJ_DIR}/%.o	: ${SRC_DIR}/%.s
	mkdir -p ${OBJ_DIR}
	${ASM} ${ASM_FLAG} -o $@ $<

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib ${NAME}

all: $(NAME)

test: $(NAME) ${SRC_DIR}/main.c
	@echo ======== TEST LIBASM ========
	gcc -g -no-pie -Wall -Wextra -Werror ${SRC_DIR}/main.c ${NAME} -I ./include -o tester

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ./tester
