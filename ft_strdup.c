#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *nova;

	nova = (char*)malloc(ft_strlen(s) + 1);
	if (nova == NULL)
		return (NULL);
	return (ft_strcpy(nova, s));
}
