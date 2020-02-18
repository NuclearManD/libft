FLAGS = -Wall -Wextra -Werror
NAME = libft

$(NAME):
	# normal standard library
	gcc $(FLAGS) ft_memset.c -c
	gcc $(FLAGS) ft_bzero.c -c
	gcc $(FLAGS) ft_memcpy.c -c
	gcc $(FLAGS) ft_memccpy.c -c
	gcc $(FLAGS) ft_memmove.c -c
	gcc $(FLAGS) ft_memchr.c -c
	gcc $(FLAGS) ft_memcmp.c -c
	gcc $(FLAGS) ft_strlen.c -c
	gcc $(FLAGS) ft_strdup.c -c
	gcc $(FLAGS) ft_strcpy.c -c
	gcc $(FLAGS) ft_strncpy.c -c
	gcc $(FLAGS) ft_strcat.c -c
	gcc $(FLAGS) ft_strncat.c -c
	gcc $(FLAGS) ft_strlcat.c -c
	gcc $(FLAGS) ft_strchr.c -c
	gcc $(FLAGS) ft_strrchr.c -c
	gcc $(FLAGS) ft_strstr.c -c
	gcc $(FLAGS) ft_strnstr.c -c
	gcc $(FLAGS) ft_strcmp.c -c
	gcc $(FLAGS) ft_strncmp.c -c
	gcc $(FLAGS) ft_atoi.c -c
	gcc $(FLAGS) ft_isalpha.c -c
	gcc $(FLAGS) ft_isdigit.c -c
	gcc $(FLAGS) ft_isalnum.c -c
	gcc $(FLAGS) ft_isascii.c -c
	gcc $(FLAGS) ft_isprint.c -c
	gcc $(FLAGS) ft_toupper.c -c
	gcc $(FLAGS) ft_tolower.c -c

	# 42 utility functions



	ar rcs libft.a *.o
all: $(NAME)
clean:
	rm -f libft.a
fclean: clean
	rm -f *.o
re: fclean, all
