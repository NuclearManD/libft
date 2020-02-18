#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i = -1;
	char *d = (char*)dest;
	const char *s = (const char*)src;

	while (++i < n)
	{
		d[i] = *s;
		if (*(s++) == (char)c)
			return (void*)s;
	}
	return NULL;
}
