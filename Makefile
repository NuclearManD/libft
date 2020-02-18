FLAGS = -Wall -Wextra -Werror
NAME = libft

$(NAME):
	gcc $(FLAGS) memset.c -c
	gcc $(FLAGS) bzero.c -c
	gcc $(FLAGS) memcpy.c -c
	gcc $(FLAGS) memccpy.c -c
	gcc $(FLAGS) memmove.c -c
	gcc $(FLAGS) memchr.c -c
	gcc $(FLAGS) memcmp.c -c
	gcc $(FLAGS) strlen.c -c
	gcc $(FLAGS) strdup.c -c
	gcc $(FLAGS) strcpy.c -c
	gcc $(FLAGS) strncpy.c -c
	gcc $(FLAGS) strcat.c -c
	gcc $(FLAGS) strncat.c -c
	gcc $(FLAGS) strlcat.c -c
	gcc $(FLAGS) strchr.c -c
	gcc $(FLAGS) strrchr.c -c
	gcc $(FLAGS) strstr.c -c
	gcc $(FLAGS) strnstr.c -c
	gcc $(FLAGS) strcmp.c -c
	gcc $(FLAGS) strncmp.c -c
	gcc $(FLAGS) atoi.c -c
	gcc $(FLAGS) isalpha.c -c
	gcc $(FLAGS) isdigit.c -c
	gcc $(FLAGS) isalnum.c -c
	gcc $(FLAGS) isascii.c -c
	gcc $(FLAGS) isprint.c -c
	gcc $(FLAGS) toupper.c -c
	gcc $(FLAGS) tolower.c -c
	ar rcs libft.a *.o
all: $(NAME)
clean:
	rm libft.a
fclean: clean
	rm *.o
re: fclean, all
