NAME = libft.a

COMPILER = cc

FILES = \
		main.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \

OBJECTS = $(FILES:.c=.o)
INCLUDE = libft.h

FLAGS = -Wall -Werror -Wextra


all : $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling library $(NAME) and creating object files"
	@$(COMPILER) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	@echo "Cleaning object files"
	@rm -f $(OBJECTS)

fclean:
	@echo "Cleaning object files and library"
	@rm -f $(OBJECTS) $(NAME)

re: fclean all


exec: all
	@echo "Executing library $(NAME)"
	@./$(NAME)
	@rm -f $(NAME)


.PHONY: all clean fclean re exec

