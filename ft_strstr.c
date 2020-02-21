/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:19:30 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 15:19:30 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(char *str, const char *to_find)
{
	int i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
			if (to_find[++i] == 0)
				return (str);
		str++;
	}
	return (0);
}
