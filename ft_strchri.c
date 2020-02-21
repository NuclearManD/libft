/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:54:29 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 14:54:29 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strchri returns the index of character c
**  If character c is not found then the length of the string is returned
*/

int				ft_strchri(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	if (c == 0)
		return (i);
	return (-1);
}
