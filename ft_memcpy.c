
#include "string.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = (char*)dest;
	s = (const char*)src;
	while (n--)
		d[n] = s[n];
	return dest;
}
