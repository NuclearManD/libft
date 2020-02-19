#include "string.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *ptr;

	ptr = (const char*)s;
	while (n--)
		if (*ptr == (char)c)
			return ((void*)ptr);
		else
			ptr++;
	return NULL;
}
