FLAGS=-Wall -Wextra -Werror -O3
NAME=libft.a

$(NAME): 
	gcc $(FLAGS) ft_argparse.c -c -o ft_argparse.c.o
	gcc $(FLAGS) ft_atoi.c -c -o ft_atoi.c.o
	gcc $(FLAGS) ft_atoi_base.c -c -o ft_atoi_base.c.o
	gcc $(FLAGS) ft_bzero.c -c -o ft_bzero.c.o
	gcc $(FLAGS) ft_imax.c -c -o ft_imax.c.o
	gcc $(FLAGS) ft_imin.c -c -o ft_imin.c.o
	gcc $(FLAGS) ft_isalnum.c -c -o ft_isalnum.c.o
	gcc $(FLAGS) ft_isalpha.c -c -o ft_isalpha.c.o
	gcc $(FLAGS) ft_isascii.c -c -o ft_isascii.c.o
	gcc $(FLAGS) ft_isdigit.c -c -o ft_isdigit.c.o
	gcc $(FLAGS) ft_isprint.c -c -o ft_isprint.c.o
	gcc $(FLAGS) ft_isspace.c -c -o ft_isspace.c.o
	gcc $(FLAGS) ft_itoa.c -c -o ft_itoa.c.o
	gcc $(FLAGS) ft_logi.c -c -o ft_logi.c.o
	gcc $(FLAGS) ft_lstadd.c -c -o ft_lstadd.c.o
	gcc $(FLAGS) ft_lstdel.c -c -o ft_lstdel.c.o
	gcc $(FLAGS) ft_lstdelone.c -c -o ft_lstdelone.c.o
	gcc $(FLAGS) ft_lstiter.c -c -o ft_lstiter.c.o
	gcc $(FLAGS) ft_lstmap.c -c -o ft_lstmap.c.o
	gcc $(FLAGS) ft_lstnew.c -c -o ft_lstnew.c.o
	gcc $(FLAGS) ft_memalloc.c -c -o ft_memalloc.c.o
	gcc $(FLAGS) ft_memccpy.c -c -o ft_memccpy.c.o
	gcc $(FLAGS) ft_memchr.c -c -o ft_memchr.c.o
	gcc $(FLAGS) ft_memcmp.c -c -o ft_memcmp.c.o
	gcc $(FLAGS) ft_memcpy.c -c -o ft_memcpy.c.o
	gcc $(FLAGS) ft_memdel.c -c -o ft_memdel.c.o
	gcc $(FLAGS) ft_memdup.c -c -o ft_memdup.c.o
	gcc $(FLAGS) ft_memmove.c -c -o ft_memmove.c.o
	gcc $(FLAGS) ft_memset.c -c -o ft_memset.c.o
	gcc $(FLAGS) ft_putchar.c -c -o ft_putchar.c.o
	gcc $(FLAGS) ft_putchar_fd.c -c -o ft_putchar_fd.c.o
	gcc $(FLAGS) ft_putendl.c -c -o ft_putendl.c.o
	gcc $(FLAGS) ft_putendl_fd.c -c -o ft_putendl_fd.c.o
	gcc $(FLAGS) ft_putnbr.c -c -o ft_putnbr.c.o
	gcc $(FLAGS) ft_putnbr_base.c -c -o ft_putnbr_base.c.o
	gcc $(FLAGS) ft_putnbr_fd.c -c -o ft_putnbr_fd.c.o
	gcc $(FLAGS) ft_putstr.c -c -o ft_putstr.c.o
	gcc $(FLAGS) ft_putstr_fd.c -c -o ft_putstr_fd.c.o
	gcc $(FLAGS) ft_signature.c -c -o ft_signature.c.o
	gcc $(FLAGS) ft_sqrt.c -c -o ft_sqrt.c.o
	gcc $(FLAGS) ft_str_is_alpha.c -c -o ft_str_is_alpha.c.o
	gcc $(FLAGS) ft_str_is_lowercase.c -c -o ft_str_is_lowercase.c.o
	gcc $(FLAGS) ft_str_is_numeric.c -c -o ft_str_is_numeric.c.o
	gcc $(FLAGS) ft_str_is_printable.c -c -o ft_str_is_printable.c.o
	gcc $(FLAGS) ft_str_is_uppercase.c -c -o ft_str_is_uppercase.c.o
	gcc $(FLAGS) ft_strcapitalize.c -c -o ft_strcapitalize.c.o
	gcc $(FLAGS) ft_strcat.c -c -o ft_strcat.c.o
	gcc $(FLAGS) ft_strchr.c -c -o ft_strchr.c.o
	gcc $(FLAGS) ft_strchri.c -c -o ft_strchri.c.o
	gcc $(FLAGS) ft_strclr.c -c -o ft_strclr.c.o
	gcc $(FLAGS) ft_strcmp.c -c -o ft_strcmp.c.o
	gcc $(FLAGS) ft_strcnt.c -c -o ft_strcnt.c.o
	gcc $(FLAGS) ft_strcnt_norep.c -c -o ft_strcnt_norep.c.o
	gcc $(FLAGS) ft_strcpy.c -c -o ft_strcpy.c.o
	gcc $(FLAGS) ft_strcut.c -c -o ft_strcut.c.o
	gcc $(FLAGS) ft_strdel.c -c -o ft_strdel.c.o
	gcc $(FLAGS) ft_strdup.c -c -o ft_strdup.c.o
	gcc $(FLAGS) ft_strequ.c -c -o ft_strequ.c.o
	gcc $(FLAGS) ft_striter.c -c -o ft_striter.c.o
	gcc $(FLAGS) ft_striteri.c -c -o ft_striteri.c.o
	gcc $(FLAGS) ft_strjoin.c -c -o ft_strjoin.c.o
	gcc $(FLAGS) ft_strlcat.c -c -o ft_strlcat.c.o
	gcc $(FLAGS) ft_strlcpy.c -c -o ft_strlcpy.c.o
	gcc $(FLAGS) ft_strlen.c -c -o ft_strlen.c.o
	gcc $(FLAGS) ft_strlowcase.c -c -o ft_strlowcase.c.o
	gcc $(FLAGS) ft_strmap.c -c -o ft_strmap.c.o
	gcc $(FLAGS) ft_strmapi.c -c -o ft_strmapi.c.o
	gcc $(FLAGS) ft_strncat.c -c -o ft_strncat.c.o
	gcc $(FLAGS) ft_strncmp.c -c -o ft_strncmp.c.o
	gcc $(FLAGS) ft_strncpy.c -c -o ft_strncpy.c.o
	gcc $(FLAGS) ft_strnequ.c -c -o ft_strnequ.c.o
	gcc $(FLAGS) ft_strnew.c -c -o ft_strnew.c.o
	gcc $(FLAGS) ft_strnstr.c -c -o ft_strnstr.c.o
	gcc $(FLAGS) ft_strrchr.c -c -o ft_strrchr.c.o
	gcc $(FLAGS) ft_strsplit.c -c -o ft_strsplit.c.o
	gcc $(FLAGS) ft_strstr.c -c -o ft_strstr.c.o
	gcc $(FLAGS) ft_strsub.c -c -o ft_strsub.c.o
	gcc $(FLAGS) ft_strtrim.c -c -o ft_strtrim.c.o
	gcc $(FLAGS) ft_strupcase.c -c -o ft_strupcase.c.o
	gcc $(FLAGS) ft_tolower.c -c -o ft_tolower.c.o
	gcc $(FLAGS) ft_toupper.c -c -o ft_toupper.c.o
	gcc $(FLAGS) ft_wordcount.c -c -o ft_wordcount.c.o
	gcc $(FLAGS) ft_wordsplit.c -c -o ft_wordsplit.c.o
	gcc $(FLAGS) math_cmp.c -c -o math_cmp.c.o
	gcc $(FLAGS) math_conv.c -c -o math_conv.c.o
	gcc $(FLAGS) mtx_del.c -c -o mtx_del.c.o
	gcc $(FLAGS) mtx_math.c -c -o mtx_math.c.o
	gcc $(FLAGS) mtx_new.c -c -o mtx_new.c.o
	gcc $(FLAGS) vec2_math.c -c -o vec2_math.c.o
	gcc $(FLAGS) vec2_mem.c -c -o vec2_mem.c.o
	gcc $(FLAGS) vec3_math.c -c -o vec3_math.c.o
	gcc $(FLAGS) vec3_mem.c -c -o vec3_mem.c.o
	gcc $(FLAGS) vec_math.c -c -o vec_math.c.o
	gcc $(FLAGS) vec_new.c -c -o vec_new.c.o
	
	ar rcs $(NAME) ft_argparse.c.o ft_atoi.c.o ft_atoi_base.c.o ft_bzero.c.o ft_imax.c.o ft_imin.c.o ft_isalnum.c.o ft_isalpha.c.o ft_isascii.c.o ft_isdigit.c.o ft_isprint.c.o ft_isspace.c.o ft_itoa.c.o ft_logi.c.o ft_lstadd.c.o ft_lstdel.c.o ft_lstdelone.c.o ft_lstiter.c.o ft_lstmap.c.o ft_lstnew.c.o ft_memalloc.c.o ft_memccpy.c.o ft_memchr.c.o ft_memcmp.c.o ft_memcpy.c.o ft_memdel.c.o ft_memdup.c.o ft_memmove.c.o ft_memset.c.o ft_putchar.c.o ft_putchar_fd.c.o ft_putendl.c.o ft_putendl_fd.c.o ft_putnbr.c.o ft_putnbr_base.c.o ft_putnbr_fd.c.o ft_putstr.c.o ft_putstr_fd.c.o ft_signature.c.o ft_sqrt.c.o ft_str_is_alpha.c.o ft_str_is_lowercase.c.o ft_str_is_numeric.c.o ft_str_is_printable.c.o ft_str_is_uppercase.c.o ft_strcapitalize.c.o ft_strcat.c.o ft_strchr.c.o ft_strchri.c.o ft_strclr.c.o ft_strcmp.c.o ft_strcnt.c.o ft_strcnt_norep.c.o ft_strcpy.c.o ft_strcut.c.o ft_strdel.c.o ft_strdup.c.o ft_strequ.c.o ft_striter.c.o ft_striteri.c.o ft_strjoin.c.o ft_strlcat.c.o ft_strlcpy.c.o ft_strlen.c.o ft_strlowcase.c.o ft_strmap.c.o ft_strmapi.c.o ft_strncat.c.o ft_strncmp.c.o ft_strncpy.c.o ft_strnequ.c.o ft_strnew.c.o ft_strnstr.c.o ft_strrchr.c.o ft_strsplit.c.o ft_strstr.c.o ft_strsub.c.o ft_strtrim.c.o ft_strupcase.c.o ft_tolower.c.o ft_toupper.c.o ft_wordcount.c.o ft_wordsplit.c.o math_cmp.c.o math_conv.c.o mtx_del.c.o mtx_math.c.o mtx_new.c.o vec2_math.c.o vec2_mem.c.o vec3_math.c.o vec3_mem.c.o vec_math.c.o vec_new.c.o

all: $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

