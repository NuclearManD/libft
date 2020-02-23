/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:54:04 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:54:04 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int		i_count_strings_and_clean(const char **s, char c)
{
	int			cnt;
	const char	*sr;
	char		last;

	while (**s == c && **s != 0)
		(*s)++;
	sr = *s;
	cnt = *sr != 0;
	while (*sr)
	{
		last = *sr;
		while (*sr == c)
			sr++;
		if (last == c && *sr != 0)
			cnt++;
		sr++;
	}
	return (cnt);
}

static char		**i_split_loop(char **arr, const char *s, char c)
{
	int			i;
	char		last;
	const char	*so;

	i = 0;
	so = s;
	last = *s;
	while (*(++s))
	{
		if (*s == c && c != last)
			arr[i++] = ft_strcut(so, c);
		if (*s == c)
			so = s + 1;
		last = *s;
	}
	if (ft_strlen(so) > 0 && so[0] != c)
		arr[i++] = ft_strcut(so, c);
	arr[i] = NULL;
	return (arr);
}

char			**ft_strsplit(const char *s, char c)
{
	int			nstr;
	char		**arr;

	if (s == NULL)
		return (NULL);
	nstr = i_count_strings_and_clean(&s, c);
	arr = (char**)malloc(sizeof(char*) * (nstr + 1));
	if (arr == NULL)
		return (NULL);
	if (nstr == 0)
	{
		arr[0] = NULL;
		return (arr);
	}
	return (i_split_loop(arr, s, c));
}
