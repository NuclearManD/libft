/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argparse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 13:59:06 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 13:59:06 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long			ft_getflags(int argc, char **argv, char *flags)
{
	long	out;
	int		si;
	int		ci;

	out = 0;
	while (--argc)
		if (*argv[argc] == '-' && argv[argc][1] != '-')
		{
			if (argv[argc][1] == 0)
				return (FLAG_ERR_NONE_SPECIFIED);
			si = 0;
			while (argv[argc][++si])
			{
				ci = ft_strchri(flags, argv[argc][si]);
				if (ci == -1)
					return (FLAG_ERR_INVALID);
				out |= 1 << ci;
			}
		}
	return (out);
}

int				ft_hasoption(int argc, char **argv, char *option)
{
	while (--argc)
		if (*argv[argc] == '-' && argv[argc][1] == '-')
		{
			if (ft_strcmp(option, argv[argc] + 2) == 0)
				return (1);
		}
	return (0);
}

char			*ft_getoption(int argc, char **argv, char *option)
{
	argc--;
	while (--argc)
		if (*argv[argc] == '-' && argv[argc][1] == '-')
		{
			if (ft_strcmp(option, argv[argc] + 2) == 0)
				return (argv[argc + 1]);
		}
	return (NULL);
}
