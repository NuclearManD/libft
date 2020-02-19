/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:31:38 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 15:31:38 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "string.h"

int		ft_atoi(char *str);
int		ft_atoi_base(char *str, char *base);
void	ft_bzero(void *s, size_t n);
int		ft_imax(int a, int b);
int		ft_imin(int a, int b);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
int		ft_logi(int base, int val);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_base(int nb, char *base);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char const *s, int fd);
long	ft_signature_s(char *str);
long	ft_signature_i(int val);
long	ft_signature_l(long val);
long	ft_signature_d(double val);
int		ft_str_is_alpha(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *s, int c);
int		ft_strchri(char *s, char c);
void	ft_strclr(char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcnt(const char *s, char c);
int		ft_strcnt_norep(const char *s, char c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcut(char *s, char c);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlcat(char *dest, const char *src, unsigned int size);
int		ft_strlcpy(char *dest, const char *src, unsigned int n);
size_t	ft_strlen(const char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dest, const char *src, int nb);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strncpy(char *dest, const char *src, unsigned int n);
int		ft_strnequ(char const *s1, char const *s2);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *s, int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(char *str, const char *to_find);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strupcase(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
