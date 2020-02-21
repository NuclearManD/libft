/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 23:44:11 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/29 12:21:27 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int out;
	unsigned int l;

	l = 0;
	while (*(dest++) && (l < size))
		l++;
	out = l;
	dest--;
	while ((0 != *src) && (out + 1 < size))
	{
		*(dest++) = *(src++);
		out++;
	}
	while (*(src++))
		out++;
	if (size > l)
		*dest = 0;
	return (out);
}
