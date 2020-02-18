/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:40:28 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/23 17:40:28 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	out[12];
	int		len;

	len = 0;
	if (nb == 0)
		out[len++] = '0';
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb != 0)
	{
		out[len++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while ((len--) > 0)
		ft_putchar(out[len]);
}
