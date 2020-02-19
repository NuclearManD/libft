/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 22:40:45 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/18 22:40:45 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "string.h"

void	ft_putstr(char *str);
char	*ft_strlowcase(char *str);
void	ft_putnbr(int nb);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
int		ft_str_is_lowercase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_atoi(char *str);
char	*ft_strupcase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_alpha(char *str);

#endif
