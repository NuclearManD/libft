
#include "string.h"

size_t ft_strlen(const char* str)
{
	size_t size;
	while (str[size] != 0)
		size++;
	return size;
}
