# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 12:22:12 by pabalons          #+#    #+#              #
#    Updated: 2024/10/01 14:39:13 by pabalons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_SRC = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:%.c=%.o}
BONUS_OBJ = ${BONUS_SRC:%.c=%.o}


BONUS_FLAG = .bonus_compiled


all: ${NAME} 



${NAME}: ${OBJ}
	ar -rcs $@ $^


%.o: %.c
	cc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ} ${BONUS_OBJ}
	rm -f ${BONUS_FLAG}


fclean: clean
	rm -f ${NAME}


re: fclean all

bonus : ${BONUS_FLAG}

${BONUS_FLAG}: ${OBJ} ${BONUS_OBJ}
	ar -rcs ${NAME} ${BONUS_OBJ}
	touch ${BONUS_FLAG}

PHONY: all bonus clean fclean re
