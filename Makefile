FLAGS=-Wall -Wextra -Werror -O3
NAME=libft.a

$(NAME): 
	gcc $(FLAGS) ft_atoi.c -c -o ft_atoi.c.o
	gcc $(FLAGS) ft_atoi_base.c -c -o ft_atoi_base.c.o
	gcc $(FLAGS) ft_bzero.c -c -o ft_bzero.c.o
	gcc $(FLAGS) ft_isalnum.c -c -o ft_isalnum.c.o
	gcc $(FLAGS) ft_isalpha.c -c -o ft_isalpha.c.o
	gcc $(FLAGS) ft_isascii.c -c -o ft_isascii.c.o
	gcc $(FLAGS) ft_isdigit.c -c -o ft_isdigit.c.o
	gcc $(FLAGS) ft_isprint.c -c -o ft_isprint.c.o
	gcc $(FLAGS) ft_memccpy.c -c -o ft_memccpy.c.o
	gcc $(FLAGS) ft_memchr.c -c -o ft_memchr.c.o
	gcc $(FLAGS) ft_memcmp.c -c -o ft_memcmp.c.o
	gcc $(FLAGS) ft_memcpy.c -c -o ft_memcpy.c.o
	gcc $(FLAGS) ft_memmove.c -c -o ft_memmove.c.o
	gcc $(FLAGS) ft_memset.c -c -o ft_memset.c.o
	gcc $(FLAGS) ft_putnbr.c -c -o ft_putnbr.c.o
	gcc $(FLAGS) ft_putnbr_base.c -c -o ft_putnbr_base.c.o
	gcc $(FLAGS) ft_putstr.c -c -o ft_putstr.c.o
	gcc $(FLAGS) ft_str_is_alpha.c -c -o ft_str_is_alpha.c.o
	gcc $(FLAGS) ft_str_is_lowercase.c -c -o ft_str_is_lowercase.c.o
	gcc $(FLAGS) ft_str_is_numeric.c -c -o ft_str_is_numeric.c.o
	gcc $(FLAGS) ft_str_is_printable.c -c -o ft_str_is_printable.c.o
	gcc $(FLAGS) ft_str_is_uppercase.c -c -o ft_str_is_uppercase.c.o
	gcc $(FLAGS) ft_strcapitalize.c -c -o ft_strcapitalize.c.o
	gcc $(FLAGS) ft_strcat.c -c -o ft_strcat.c.o
	gcc $(FLAGS) ft_strchr.c -c -o ft_strchr.c.o
	gcc $(FLAGS) ft_strcmp.c -c -o ft_strcmp.c.o
	gcc $(FLAGS) ft_strcpy.c -c -o ft_strcpy.c.o
	gcc $(FLAGS) ft_strdup.c -c -o ft_strdup.c.o
	gcc $(FLAGS) ft_strlcat.c -c -o ft_strlcat.c.o
	gcc $(FLAGS) ft_strlcpy.c -c -o ft_strlcpy.c.o
	gcc $(FLAGS) ft_strlen.c -c -o ft_strlen.c.o
	gcc $(FLAGS) ft_strlowcase.c -c -o ft_strlowcase.c.o
	gcc $(FLAGS) ft_strncat.c -c -o ft_strncat.c.o
	gcc $(FLAGS) ft_strncmp.c -c -o ft_strncmp.c.o
	gcc $(FLAGS) ft_strncpy.c -c -o ft_strncpy.c.o
	gcc $(FLAGS) ft_strnstr.c -c -o ft_strnstr.c.o
	gcc $(FLAGS) ft_strrchr.c -c -o ft_strrchr.c.o
	gcc $(FLAGS) ft_strstr.c -c -o ft_strstr.c.o
	gcc $(FLAGS) ft_strupcase.c -c -o ft_strupcase.c.o
	gcc $(FLAGS) ft_tolower.c -c -o ft_tolower.c.o
	gcc $(FLAGS) ft_toupper.c -c -o ft_toupper.c.o
	gcc $(FLAGS) test.c -c -o test.c.o
	
	ar rcs $(NAME) ft_atoi.c.o ft_atoi_base.c.o ft_bzero.c.o ft_isalnum.c.o ft_isalpha.c.o ft_isascii.c.o ft_isdigit.c.o ft_isprint.c.o ft_memccpy.c.o ft_memchr.c.o ft_memcmp.c.o ft_memcpy.c.o ft_memmove.c.o ft_memset.c.o ft_putnbr.c.o ft_putnbr_base.c.o ft_putstr.c.o ft_str_is_alpha.c.o ft_str_is_lowercase.c.o ft_str_is_numeric.c.o ft_str_is_printable.c.o ft_str_is_uppercase.c.o ft_strcapitalize.c.o ft_strcat.c.o ft_strchr.c.o ft_strcmp.c.o ft_strcpy.c.o ft_strdup.c.o ft_strlcat.c.o ft_strlcpy.c.o ft_strlen.c.o ft_strlowcase.c.o ft_strncat.c.o ft_strncmp.c.o ft_strncpy.c.o ft_strnstr.c.o ft_strrchr.c.o ft_strstr.c.o ft_strupcase.c.o ft_tolower.c.o ft_toupper.c.o test.c.o

all: $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean, all

