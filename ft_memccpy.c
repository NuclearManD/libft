
#include <stdlib.h>
#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char *d;
	const char *s;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = -1;
	d = (char*)dest;
	s = (const char*)src;
	while (++i < n)
	{
		d[i] = *(s++);
		if (d[i] == (char)c)
			return (&(dest[i + 1]));
	}
	return (NULL);
}
