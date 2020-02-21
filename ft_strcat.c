/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 23:44:11 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 23:44:11 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcat(char *dest, char *src)
{
	char *out;

	out = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
	return (out);
}
