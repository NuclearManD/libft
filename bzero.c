#include <string.h>

void ft_bzero(void *s, size_t n)
{
	char *ptr = (char*)s;

	while (n--)
		ptr[n] = 0;
}
