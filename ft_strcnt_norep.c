/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnt_norep.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:00:38 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 14:00:38 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the numer of occurances of character c, not including repeats
*/

int				ft_strcnt_norep(const char *s, char c)
{
	int		i;
	char	last;

	i = 0;
	last = c;
	while (*s)
	{
		if (*s == c && c != last)
			i++;
		last = *(s++);
	}
	if (c == 0)
		return (1);
	return (i);
}
