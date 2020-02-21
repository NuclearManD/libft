/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:40:06 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 19:05:31 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcapitalize(char *str)
{
	int		i;
	char	ch;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i])
	{
		ch = str[i - 1];
		if ((ch == ' ') || (ch == '-') || (ch == '+') || (ch == '\n'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}
