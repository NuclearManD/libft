/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 00:00:41 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 00:00:41 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
    int j;

    j = 0;
	if (*to_find == 0)
		return (str);
	while (*str && j < len)
	{
		i = 0;
		while (str[i] == to_find[i])
			if (to_find[++i] == 0)
				return (str);
		str++;
        j++;
	}
	return (0);
}
