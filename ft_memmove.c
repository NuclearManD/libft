
#include "string.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	size_t i;

	d = (char*)dest;
	s = (const char*)src;
	i = -1; // this will become zero in forward copy first iteration
	if ((size_t)dest > (size_t)src) // copy backwards to avoid overwrite
		while (n--)
			d[n] = s[n];
	else if ((size_t)dest < (size_t)src) // copy forwards to avoid overwrite
		while (++i < n)
			d[i] = s[i];
	return dest;
}