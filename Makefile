# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 10:26:56 by pabalons          #+#    #+#              #
#    Updated: 2024/09/30 13:57:30 by pabalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
       ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
       ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_split.c ft_strchr.c \
       ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
       ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
       ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
       ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c 

TEST = test.c  # Archivo de prueba

CC = cc

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRCS:.c=.o}

BONUS_OBJ = ${BONUS_SRC:.c=.o}

TEST_EXEC = test_exec  # Nombre del ejecutable de prueba

# Generar todos los objetos y librería
all: ${NAME}

# Crear la librería estática
${NAME}: ${OBJ}
	@ar -rcs ${NAME} ${OBJ}

bonus: .bonus_flag

.bonus_flag: ${BONUS_OBJ}
	@ar -rcs ${NAME} ${BONUS_OBJ}
	-@touch .bonus_flag

# Regla para compilar archivos objeto
%.o: %.c
	@${CC} ${FLAGS} -c $< -o $@

# Limpiar objetos y ejecutables de prueba
clean:
	@rm -f ${OBJ} ${BONUS_OBJ}
	@rm -f .bonus_flag ${TEST_EXEC}

fclean: clean
	@rm -f ${NAME}

re: fclean all

# Crear y ejecutar el programa de prueba
exec: all ${TEST_EXEC}
	@echo "Executing test with library $(NAME)"
	@./${TEST_EXEC}

# Regla para compilar el ejecutable de prueba enlazando con la librería
${TEST_EXEC}: ${NAME} ${TEST}
	@${CC} ${FLAGS} ${TEST} -L. -lft -o ${TEST_EXEC}

.PHONY: all clean fclean re bonus