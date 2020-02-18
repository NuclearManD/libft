#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *nova = (char*)malloc(ft_strlen(s));

	return ft_strcpy(nova, s);
}
