/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:40:28 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/23 17:40:28 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		recursive_putnbr_base(int nb, int baselen, char *base)
{
	if (nb < baselen)
		ft_putchar(base[nb]);
	else
	{
		recursive_putnbr_base(nb / baselen, baselen, base);
		ft_putchar(base[nb % baselen]);
	}
}

void			ft_putnbr_base(int nb, char *base)
{
	int len;
	int i;

	len = -1;
	while (base[++len])
	{
		i = len + 1;
		while (base[i])
			if (base[i++] == base[len] || base[len] == 43 || base[len] == 45)
				return ;
	}
	if (len <= 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		if (-nb >= len)
			recursive_putnbr_base(-(nb / len), len, base);
		ft_putchar(base[(len - (nb % len)) % len]);
	}
	else
		recursive_putnbr_base(nb, len, base);
}
