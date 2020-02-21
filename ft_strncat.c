/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 23:44:11 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/29 10:29:17 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strncat(char *dest, const char *src, int nb)
{
	char *out;

	out = dest;
	while (*dest)
		dest++;
	while ((*src) && (nb--))
		*(dest++) = *(src++);
	*dest = 0;
	return (out);
}
