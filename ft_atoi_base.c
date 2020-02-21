/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:52:37 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 13:54:51 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		calc_base_len(char *base)
{
	int len;
	int i;

	len = -1;
	while (base[++len])
	{
		i = len;
		while (base[++i])
			if (base[i] == base[len] || base[len] == '-' || base[len] == '+')
				return (-1);
	}
	return (len);
}

static int		ft_chr_idx(char *str, int len, char c)
{
	int i;

	i = -1;
	while (++i < len)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1);
}

int				ft_atoi_base(char *str, char *base)
{
	int out;
	int baselen;
	int idx;
	int sign;

	baselen = calc_base_len(base);
	out = 0;
	if (baselen < 2)
		return (0);
	if (*str == '-')
		str -= (sign = -1);
	else if (*str == '+')
		str += (sign = 1);
	else
		sign = 1;
	while (*str)
	{
		idx = ft_chr_idx(base, baselen, *(str++));
		if (idx < 0)
			return (0);
		out = out * baselen + idx * sign;
	}
	return (out);
}
