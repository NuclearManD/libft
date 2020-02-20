/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:10:03 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 19:21:51 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == 0)
		return (0);
	str--;
	while (*(++str))
		if (*str < 'a' || *str > 'z')
			return (0);
	return (1);
}
