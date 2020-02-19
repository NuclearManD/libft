/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:01:07 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 11:01:07 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "string.h"

char	*ft_strrchr(char *s, int c);
int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlcat(char *dest, const char *src, unsigned int size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strlowcase(char *str);
char	*ft_strstr(char *str, const char *to_find);
int		ft_isdigit(int c);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_toupper(int c);
char	*ft_strcpy(char *dest, const char *src);
int		ft_putchar(char c);
void	ft_putnbr_base(int nb, char *base);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int		ft_isascii(int c);
size_t	ft_strlen(const char *str);
int		ft_str_is_lowercase(char *str);
char	*ft_strncat(char *dest, const char *src, int nb);
char	*ft_strcapitalize(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_chr_idx(char *str, int len, char c);
int		ft_atoi_base(char *str, char *base);
int		ft_strlcpy(char *dest, const char *src, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_isalpha(int c);
char	*ft_strcat(char *dest, char *src);
int		ft_tolower(int c);
int		ft_atoi(char *str);
char	*ft_strupcase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_isprint(int c);
int		ft_str_is_printable(char *str);
char	*ft_strchr(char *s, int c);
int		ft_str_is_alpha(char *str);

#endif
