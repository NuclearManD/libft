#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *a;
	const char *b;

	a = (const char*)s1;
	b = (const char*)s2;
	while (n--)
		if (a[n] != b[n])
			return a[n] - b[n];
	return (0);
}
