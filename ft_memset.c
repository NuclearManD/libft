
#include "string.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *dst = s;
	while (n--)
		dst[n] = (unsigned char)c;
	return (s);
}
