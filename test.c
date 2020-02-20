#include "stdlib.h"
#include "string.h"
#include "stdio.h"

#include "libft.h"

int				_autogen_test_ft_atoi(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_atoi(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_atoi(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_atoi_base(char *str, char *base, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_atoi_base(str, base);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_atoi_base(%s, %s) = %d\n\texpected %d\n", str, base, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_bzero(void *s, size_t n)
{
	int			__success;

	ft_bzero(s, n);
	__success = memcmp(s, calloc(n, 1), n) == 0;
	if (!__success)
	printf("KO ft_bzero(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_imax(int a, int b, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_imax(a, b);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_imax(%d, %d) = %d\n\texpected %d\n", a, b, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_imin(int a, int b, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_imin(a, b);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_imin(%d, %d) = %d\n\texpected %d\n", a, b, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isalnum(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isalnum(c);
	__result = ft_isalnum(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isalnum(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isalpha(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isalpha(c);
	__result = ft_isalpha(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isalpha(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isascii(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isascii(c);
	__result = ft_isascii(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isascii(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isdigit(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isdigit(c);
	__result = ft_isdigit(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isdigit(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isprint(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isprint(c);
	__result = ft_isprint(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isprint(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_isspace(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = isspace(c);
	__result = ft_isspace(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_isspace(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_itoa(int n, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_itoa(n);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_itoa(%d) = %s\n\texpected %s\n", n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_logi(int base, int val, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_logi(base, val);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_logi(%d, %d) = %d\n\texpected %d\n", base, val, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memalloc(size_t size, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memalloc(size);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memalloc(0x%zX) = %p\n\texpected %p\n", size, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memccpy(void *dest, const void *src, int c, size_t n, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memccpy(dest, src, c, n);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memccpy(%p, [const void@%p], %d, 0x%zX) = %p\n\texpected %p\n", dest, src, c, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memchr(const void *s, int c, size_t n, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memchr(s, c, n);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memchr([const void@%p], %d, 0x%zX) = %p\n\texpected %p\n", s, c, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memcmp(const void *s1, const void *s2, size_t n, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_memcmp(s1, s2, n);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_memcmp([const void@%p], [const void@%p], 0x%zX) = %d\n\texpected %d\n", s1, s2, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memcpy(void *dest, const void *src, size_t n, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memcpy(dest, src, n);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memcpy(%p, [const void@%p], 0x%zX) = %p\n\texpected %p\n", dest, src, n, __result, __expected);
	return (__success);
}
/*
int				_autogen_test_ft_memdel(void **ap, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_memdel(ap);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_memdel(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_memmove(void *dest, const void *src, size_t n, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memmove(dest, src, n);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memmove(%p, [const void@%p], 0x%zX) = %p\n\texpected %p\n", dest, src, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_memset(void *s, int c, size_t n, void *__expected, int __n)
{
	int			__success;
	void		*__result;

	__result = ft_memset(s, c, n);
	__success = 0 == memcmp(__expected, __result, __n);
	if (!__success)
	printf("KO ft_memset(%p, %d, 0x%zX) = %p\n\texpected %p\n", s, c, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_putchar(char c, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putchar(c);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putchar(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putchar_fd(char c, int fd, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putchar_fd(c, fd);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putchar_fd(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putendl(const char *s, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putendl(s);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putendl(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putendl_fd(const char *s, int fd, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putendl_fd(s, fd);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putendl_fd(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putnbr(int nb, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putnbr(nb);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putnbr(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putnbr_base(int nb, char *base, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putnbr_base(nb, base);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putnbr_base(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putnbr_fd(int nb, int fd, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putnbr_fd(nb, fd);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putnbr_fd(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putstr(char *str, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putstr(str);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putstr(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_putstr_fd(const char *str, int fd, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_putstr_fd(str, fd);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_putstr_fd(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_signature_s(char *str, long __expected)
{
	int			__success;
	long		__result;

	__result = ft_signature_s(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_signature_s(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_signature_i(int val, long __expected)
{
	int			__success;
	long		__result;

	__result = ft_signature_i(val);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_signature_i(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_signature_l(long val, long __expected)
{
	int			__success;
	long		__result;

	__result = ft_signature_l(val);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_signature_l(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_signature_d(double val, long __expected)
{
	int			__success;
	long		__result;

	__result = ft_signature_d(val);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_signature_d(<cannot express arguments>)\n");
	return (__success);
}
*/
int				_autogen_test_ft_str_is_alpha(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_str_is_alpha(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_str_is_alpha(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_str_is_lowercase(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_str_is_lowercase(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_str_is_lowercase(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_str_is_numeric(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_str_is_numeric(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_str_is_numeric(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_str_is_printable(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_str_is_printable(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_str_is_printable(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_str_is_uppercase(char *str, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_str_is_uppercase(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_str_is_uppercase(%s) = %d\n\texpected %d\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcapitalize(char *str, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strcapitalize(str);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strcapitalize(%s) = %s\n\texpected %s\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcat(char *dest, char *src, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strcat(dest, src);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strcat(%s, %s) = %s\n\texpected %s\n", dest, src, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strchr(char *s, int c)
{
	int			__success;
	char		*__result;
	char		*__expected;

	__expected = strchr(s, c);
	__result = ft_strchr(s, c);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strchr(%s, %d) = %s\n\texpected %s\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strchri(const char *s, char c, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_strchri(s, c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strchri(%s, %c) = %d\n\texpected %d\n", s, c, __result, __expected);
	return (__success);
}
/*
int				_autogen_test_ft_strclr(char *s, void __expected)
{
	int			__success;
	void		__result;

	__result = ft_strclr(s);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_strclr(<cannot express arguments>)\n");
	return (__success);
}
*/
int				_autogen_test_ft_strcmp(char *s1, char *s2)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = strcmp(s1, s2);
	__result = ft_strcmp(s1, s2);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strcmp(%s, %s) = %d\n\texpected %d\n", s1, s2, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcnt(const char *s, char c, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_strcnt(s, c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strcnt(%s, %c) = %d\n\texpected %d\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcnt_norep(const char *s, char c, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_strcnt_norep(s, c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strcnt_norep(%s, %c) = %d\n\texpected %d\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcpy(char *dest, const char *src, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strcpy(dest, src);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strcpy(%s, %s) = %s\n\texpected %s\n", dest, src, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strcut(const char *s, char c, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strcut(s, c);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strcut(%s, %c) = %s\n\texpected %s\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strdel(char **as)
{
	int			__success;

	ft_strdel(as);
	__success = *as == NULL; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_strdel(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_strdup(const char *s, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strdup(s);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strdup(%s) = %s\n\texpected %s\n", s, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strequ(const char *s1, const char *s2, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_strequ(s1, s2);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strequ(%s, %s) = %d\n\texpected %d\n", s1, s2, __result, __expected);
	return (__success);
}
/*
int				_autogen_test_ft_striter(char *s, void (*f)(char *), void __expected)
{
	int			__success;
	void		__result;

	__result = ft_striter(s, f);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_striter(<cannot express arguments>)\n");
	return (__success);
}

int				_autogen_test_ft_striteri(char *s, void (*f)(unsigned int, char *), void __expected)
{
	int			__success;
	void		__result;

	__result = ft_striteri(s, f);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_striteri(<cannot express arguments>)\n");
	return (__success);
}
*/
int				_autogen_test_ft_strjoin(const char *s1, const char *s2, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strjoin(s1, s2);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strjoin(%s, %s) = %s\n\texpected %s\n", s1, s2, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strlcat(char *dest, const char *src, unsigned int size, unsigned int __expected)
{
	int			__success;
	size_t		__result;

	__result = ft_strlcat(dest, src, size);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strlcat(%s, %s, %u) = %u\n\texpected %u\n", dest, src, size, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strlcpy(char *dest, const char *src, unsigned int n, unsigned int __expected)
{
	int			__success;
	size_t		__result;

	__result = ft_strlcpy(dest, src, n);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strlcpy(%s, %s, %u) = %u\n\texpected %u\n", dest, src, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strlen(const char *str, size_t __expected)
{
	int			__success;
	size_t		__result;

	__result = ft_strlen(str);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strlen(%s) = 0x%zX\n\texpected 0x%zX\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strlowcase(char *str, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strlowcase(str);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strlowcase(%s) = %s\n\texpected %s\n", str, __result, __expected);
	return (__success);
}
/*
int				_autogen_test_ft_strmap(const char *s, char (*f)(char), char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strmap(s, f);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strmap(%s, [Function@%p]) = %s\n\texpected %s\n", s, f, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strmapi(const char *s, char (*f)(unsigned int, char), char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strmapi(s, f);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strmapi(%s, [Function@%p]) = %s\n\texpected %s\n", s, f, __result, __expected);
	return (__success);
}
*/
int				_autogen_test_ft_strncat(char *dest, const char *src, int nb, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strncat(dest, src, nb);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strncat(%s, %s, %d) = %s\n\texpected %s\n", dest, src, nb, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = strncmp(s1, s2, n);
	__result = ft_strncmp(s1, s2, n);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strncmp(%s, %s, %u) = %d\n\texpected %d\n", s1, s2, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strncpy(char *dest, const char *src, unsigned int n, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strncpy(dest, src, n);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strncpy(%s, %s, %u) = %s\n\texpected %s\n", dest, src, n, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strnequ(const char *s1, const char *s2, size_t limit, int __expected)
{
	int			__success;
	int			__result;

	__result = ft_strnequ(s1, s2, limit);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_strnequ(%s, %s, 0x%zX) = %d\n\texpected %d\n", s1, s2, limit, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strnew(size_t size, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strnew(size);
	__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strnew(0x%zX) = %s\n\texpected %s\n", size, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int			__success;
	char		*__result;
	char		*__expected;

	__expected = strnstr(str, to_find, len);
	__result = ft_strnstr(str, to_find, len);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strnstr(%s, %s, 0x%zX) = %s\n\texpected %s\n", str, to_find, len, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strrchr(char *s, int c)
{
	int			__success;
	char		*__result;
	char		*__expected;

	__expected = strrchr(s, c);
	__result = ft_strrchr(s, c);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strrchr(%s, %d) = %s\n\texpected %s\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strsplit(const char *s, char c, char **__expected)
{
	int			__success;
	char		**__result;

	__result = ft_strsplit(s, c);
	__success = 1; // __success = __expected ? __result;
	if (!__success)
	printf("KO ft_strsplit(%s, %c) = [char*@%p]\n\texpected [char*@%p]\n", s, c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strstr(char *str, const char *to_find)
{
	int			__success;
	char		*__result;
	char		*__expected;

	__expected = strstr(str, to_find);
	__result = ft_strstr(str, to_find);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strstr(%s, %s) = %s\n\texpected %s\n", str, to_find, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strsub(const char *s, unsigned int start, size_t len, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strsub(s, start, len);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strsub(%s, %u, 0x%zX) = %s\n\texpected %s\n", s, start, len, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strtrim(const char *s, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strtrim(s);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strtrim(%s) = %s\n\texpected %s\n", s, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_strupcase(char *str, char *__expected)
{
	int			__success;
	char		*__result;

	__result = ft_strupcase(str);
	if (__expected == NULL || __result == NULL)
		__success = __result == NULL;
	else
		__success = 0 == strcmp(__expected, __result);
	if (!__success)
	printf("KO ft_strupcase(%s) = %s\n\texpected %s\n", str, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_tolower(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = tolower(c);
	__result = ft_tolower(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_tolower(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

int				_autogen_test_ft_toupper(int c)
{
	int			__success;
	int			__result;
	int			__expected;

	__expected = toupper(c);
	__result = ft_toupper(c);
	__success = __expected == __result;
	if (!__success)
	printf("KO ft_toupper(%d) = %d\n\texpected %d\n", c, __result, __expected);
	return (__success);
}

void			psplit(char **arr)
{
	if (arr == NULL)
		printf("[null]");
	else
		while (*arr)
			printf("%s ", *(arr++));
	printf("\n");
}

int				main(void)
{
	int			retval;
	char		*buffer;

	retval = 1;
	buffer = (char*)malloc(128);

	_autogen_test_ft_atoi("-123", -123);
	_autogen_test_ft_atoi("2349843", 2349843);
	_autogen_test_ft_atoi("2147483647", 2147483647);
	_autogen_test_ft_atoi("-2147483648", -2147483648);
	_autogen_test_ft_atoi("0", 0);

	_autogen_test_ft_atoi_base("abc", "0abc456789", 123);

	_autogen_test_ft_bzero(buffer, 128);
	_autogen_test_ft_bzero(buffer, 2);
	_autogen_test_ft_bzero(buffer, 0);

	_autogen_test_ft_imax(0, 8, 8);
	_autogen_test_ft_imax(9, 8, 9);

	_autogen_test_ft_imin(0, 8, 0);
	_autogen_test_ft_imin(9, 8, 8);

	_autogen_test_ft_itoa(-123, "-123");
	_autogen_test_ft_itoa(0, "0");
	_autogen_test_ft_itoa(2147483647, "2147483647");
	_autogen_test_ft_itoa(-2147483648, "-2147483648");

	_autogen_test_ft_logi(2, 16, 4);
	_autogen_test_ft_logi(10, 16, 1);
	_autogen_test_ft_logi(10, 32, 1);
	_autogen_test_ft_logi(10, 232, 2);
/*
	_autogen_test_ft_memalloc(size_t size, void *__expected, int __n);

	_autogen_test_ft_memccpy(void *dest, const void *src, int c, size_t n, void *__expected, int __n);

	_autogen_test_ft_memchr(const void *s, int c, size_t n, void *__expected, int __n);

	_autogen_test_ft_memcmp(const void *s1, const void *s2, size_t n, int __expected);

	_autogen_test_ft_memcpy(void *dest, const void *src, size_t n, void *__expected, int __n);

	_autogen_test_ft_memdel(void **ap, void __expected);

	_autogen_test_ft_memmove(void *dest, const void *src, size_t n, void *__expected, int __n);

	_autogen_test_ft_memset(void *s, int c, size_t n, void *__expected, int __n);*/



	/*_autogen_test_ft_putchar(char c, void __expected);

	_autogen_test_ft_putchar_fd(char c, int fd, void __expected);

	_autogen_test_ft_putendl(const char *s, void __expected);

	_autogen_test_ft_putendl_fd(const char *s, int fd, void __expected);

	_autogen_test_ft_putnbr(int nb, void __expected);

	_autogen_test_ft_putnbr_base(int nb, char *base, void __expected);

	_autogen_test_ft_putnbr_fd(int nb, int fd, void __expected);

	_autogen_test_ft_putstr(char *str, void __expected);

	_autogen_test_ft_putstr_fd(const char *str, int fd, void __expected);*/

	_autogen_test_ft_str_is_alpha("vuyvyxyfYCYCYCvuFTYcuYYTCfkjhfYJT", 1);
	_autogen_test_ft_str_is_alpha("", 0);
	_autogen_test_ft_str_is_alpha("vuyvy8xyfYCYCYCvuFTYcuYYTCfkjhfYJT", 0);
	_autogen_test_ft_str_is_alpha("vuyvyxyfYCYCYCvuFTYcuYYTCfkjhfYJT ", 0);

	_autogen_test_ft_str_is_lowercase("", 0);
	_autogen_test_ft_str_is_lowercase("jydvkduvdsfs", 1);
	_autogen_test_ft_str_is_lowercase("jgghgjgfgygH", 0);
	_autogen_test_ft_str_is_lowercase("  dshffshdgfksdfsdhfsjdf", 0);

	_autogen_test_ft_str_is_numeric("", 0);
	_autogen_test_ft_str_is_numeric("52364837109283", 1);
	_autogen_test_ft_str_is_numeric("12594103 ", 0);
	_autogen_test_ft_str_is_numeric("12594103g", 0);

	_autogen_test_ft_str_is_printable("`1234567890-=dter8yguhvjh", 1);
	_autogen_test_ft_str_is_printable("", 0);
	_autogen_test_ft_str_is_printable(" ", 1);
	_autogen_test_ft_str_is_printable("r7sdfgsdukfgsdkuy\r", 0);

	_autogen_test_ft_str_is_uppercase("", 0);
	_autogen_test_ft_str_is_uppercase("XJYRYTFUTKDTYH", 1);
	_autogen_test_ft_str_is_uppercase("FHFJYGHf", 0);
	_autogen_test_ft_str_is_uppercase("324365GJHGUKYH", 0);

	_autogen_test_ft_strcapitalize(ft_strdup("i have a house"), "I Have A House");

	//_autogen_test_ft_strcat(char *dest, char *src, char *__expected);

	_autogen_test_ft_strchr("alphanumeric", 'n');
	_autogen_test_ft_strchr("alphanumeric", 'k');
	_autogen_test_ft_strchr("", 'n');

	_autogen_test_ft_strchri("abc", 'b', 1);
	_autogen_test_ft_strchri("abc", 'z', -1);
	_autogen_test_ft_strchri("abc", '\0', 3);

	//_autogen_test_ft_strclr(char *s, void __expected);

	_autogen_test_ft_strcmp("ouhcc", "ouhcc");
	_autogen_test_ft_strcmp("ouhcc2", "ouhcc");
	_autogen_test_ft_strcmp("ouhcc", "ouhcc2");
	_autogen_test_ft_strcmp("ouhcc", "oclpa");
	_autogen_test_ft_strcmp("onano", "ouuffghuu");

	_autogen_test_ft_strcnt("115200", '0', 2);
	_autogen_test_ft_strcnt("115200", '\0', 1);
	_autogen_test_ft_strcnt("115200", '1', 2);
	_autogen_test_ft_strcnt("115200", 'g', 0);

	_autogen_test_ft_strcnt_norep("abc.d...gh.9c..", '.', 4);
	_autogen_test_ft_strcnt_norep("abc.d...gh.9c..", 'N', 0);
	_autogen_test_ft_strcnt_norep("abc.d...gh.9c..", '\0', 1);

	_autogen_test_ft_strcpy(buffer, "yay", "yay");
	_autogen_test_ft_strcpy(buffer, "", "");

	_autogen_test_ft_strcut("hello world", ' ', "hello");
	_autogen_test_ft_strcut("hello world", '\0', "hello world");
	_autogen_test_ft_strcut("hello world", '\n', "hello world");
	_autogen_test_ft_strcut("hello world", 'h', "");
	_autogen_test_ft_strcut("", 'h', "");

	_autogen_test_ft_strdel(&buffer);

	_autogen_test_ft_strdup("yay", "yay");
	_autogen_test_ft_strdup("", "");

	_autogen_test_ft_strequ("yay", "yay", 1);
	_autogen_test_ft_strequ("", "", 1);
	_autogen_test_ft_strequ("yay", "yays", 0);
	_autogen_test_ft_strequ("kay", "yay", 0);

	/*_autogen_test_ft_striter(char *s, void (*f)(char *), void __expected);

	_autogen_test_ft_striteri(char *s, void (*f)(unsigned int, char *), void __expected);*/

	_autogen_test_ft_strjoin("hi", " der", "hi der");

	_autogen_test_ft_strlcat(buffer = ft_strdup("henk"), "ffof", 7, 8);

	_autogen_test_ft_strlcpy(buffer, "doom.d", 5, 6);
	_autogen_test_ft_strlcpy(buffer, "fg", 0, 2);

	_autogen_test_ft_strlen("", 0);
	_autogen_test_ft_strlen("123456789", 9);

	_autogen_test_ft_strlowcase(buffer = ft_strdup("DooM.D    "), "doom.d    ");

	//_autogen_test_ft_strmap(const char *s, char (*f)(char), char *__expected);

	//_autogen_test_ft_strmapi(const char *s, char (*f)(unsigned int, char), char *__expected);

	_autogen_test_ft_strncat(memcpy(buffer, "henk\0\0\0\0\0\0", 8), "ffof", 2, "henkff");

	_autogen_test_ft_strncmp("goont", "goond", 4);
	_autogen_test_ft_strncmp("goont", "goond", 5);
	_autogen_test_ft_strncmp("goont", "goond", 0);

	buffer = ft_strdup("henkff");

	_autogen_test_ft_strncpy(buffer, "doom.d", 4, "doomff");
	_autogen_test_ft_strncpy(buffer, "fg", 0, "doomff");

	_autogen_test_ft_strnequ("abj", "abc", 2, 1);
	_autogen_test_ft_strnequ("abj", "abc", 3, 0);
	_autogen_test_ft_strnequ("abj", "abc", 8, 0);

	_autogen_test_ft_strnew(2345, "");

	_autogen_test_ft_strnstr("I have 2 pigs lol ahi", "pig", 100);
	_autogen_test_ft_strnstr("I have 2 pigs lol ahi", "nuke", 100);

	for (int i = 0; i < 30; i++)
		_autogen_test_ft_strnstr("I have 2 pigs lol ahi", "pig", i);

	_autogen_test_ft_strrchr("fsdygvsgfkgfsbdjkbgrekbulischjlwi", 'h');
	_autogen_test_ft_strrchr("fsdygvsgfkgfsbdjkbgrekbulischjlwi", '\0');
	_autogen_test_ft_strrchr("fsdygvsgfkgfsbdjkbgrekbulischjlwi", 'X');

	//_autogen_test_ft_strsplit(const char *s, char c, char **__expected);

	_autogen_test_ft_strstr("I have 2 pigs lol ahi", "pig");
	_autogen_test_ft_strstr("I have 2 pigs lol ahi", "nuke");

	_autogen_test_ft_strsub("word1 word2 word3", 0, 5, "word1");
	_autogen_test_ft_strsub("word1 word2 word3", 6, 5, "word2");
	_autogen_test_ft_strsub("word1 word2 word3", 12, 5, "word3");

	_autogen_test_ft_strtrim("     \n\t\r\tFFFOFF\t\n\r    ", "FFFOFF");

	_autogen_test_ft_strupcase(buffer = ft_strdup("abcd"), "ABCD");

	for (int c = 0; c < 256; c++)
	{
		_autogen_test_ft_tolower(c);
		_autogen_test_ft_toupper(c);

		_autogen_test_ft_isalnum(c);
		_autogen_test_ft_isalpha(c);
		_autogen_test_ft_isascii(c);
		_autogen_test_ft_isdigit(c);
		_autogen_test_ft_isprint(c);
		_autogen_test_ft_isspace(c);
	}

	psplit(ft_strsplit("abc.d...gh.9c..", '.'));
	psplit(ft_strsplit("abc", '.'));
	psplit(ft_strsplit(NULL, '.'));

	if (retval) printf("Success!\n");
	else printf("Failure!\n");
}

