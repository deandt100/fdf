/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviwel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:14:36 by daviwel           #+#    #+#             */
/*   Updated: 2016/05/27 10:18:36 by daviwel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <libc.h>
# include <string.h>
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);

void	*ft_memset(void *s, int c, size_t length);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *const dest, void const *src, size_t n);

void	*ft_memccpy(void *const dest, void const *src, int c, size_t n);

void	*ft_memmove(void *dst, void const *src, size_t length);

void	*ft_memchr(void const *s, int c, size_t n);

int		ft_memcmp(void const *s1, void const *s2, size_t n);

size_t	ft_strlen(char const *str);

char	*ft_strdup(char const *src);

char	*ft_strcpy(char *dest, char const *src);

char	*ft_strncpy(char *dest, char const *src, size_t length);

char	*ft_strcat(char *const s1, char const *s2);

char	*ft_strncat(char *const s1, char const *s2, size_t n);

size_t	ft_strlcat(char *const dest, char const *src, size_t size);

char	*ft_strchr(char const *str, int c);

char	*ft_strrchr(char const *str, int c);

char	*ft_strstr(char const *big, char const *little);

char	*ft_strnstr(char const *big, char const *little, size_t length);

int		ft_strcmp(char const *s1, char const *s2);

int		ft_strncmp(char const *s1, char const *s2, size_t n);

int		ft_atoi(char const *str);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);

void	ft_strdel(char **as);

void	ft_strclr(char *s);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strmap(char const *s, char (*f)(char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strequ(char const *s1, char const *s2);

int		ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s);

char	**ft_strsplit(char const *s, char c);

char	*ft_itoa(int n);

void	ft_putchar(char c);

void	ft_putstr(char const *s);

void	ft_putendl(char const *s);

void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char const *s, int fd);

void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif
