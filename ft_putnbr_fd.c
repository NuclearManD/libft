/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:58:16 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:58:16 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void			ft_putnbr_fd(int nb, int fd)
{
	char	out[12];
	int		len;

	len = 0;
	if (nb == 0)
		out[len++] = '0';
	else if (nb == -2147483648)
	{
		write(fd, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb != 0)
	{
		out[len++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while ((len--) > 0)
		write(fd, &(out[len]), 1);
}
