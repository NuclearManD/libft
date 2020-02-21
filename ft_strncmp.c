/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:05:13 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 17:36:42 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *(s2++)) && (*s1) && (--n))
		s1++;
	return ((unsigned char)(*s1) - (unsigned char)(*(s2 - 1)));
}
