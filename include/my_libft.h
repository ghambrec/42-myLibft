/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:13:40 by ghambrec          #+#    #+#             */
/*   Updated: 2025/02/19 10:18:58 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIBFT_H
# define MY_LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>

/* ************************************************************************** */
/* LIBFT                                                                      */
/* ************************************************************************** */
int		ft_isalpha(char c);
int		ft_isdigit(int num);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *hay, const char *ndl, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
// gha functions
long	ft_atol(const char *str);
void	ft_putendl_cc_fd(const char *s, int fd);

/* ************************************************************************** */
/* FT_PRINTF                                                                  */
/* ************************************************************************** */
int		ft_putchar_printf(char c);
int		ft_putnbr_printf(int n);
int		ft_putstr_printf(char *s);
size_t	ft_strlen_printf(const char *str);
char	*ft_strchr_printf(const char *str, int c);
int		ft_printf(const char *inputstring, ...);
int		ft_print_str_printf(char *str);
int		ft_print_nbr_printf(int n);
int		ft_print_unsigned_nbr_printf(unsigned long n);
int		ft_print_voidptr_printf(unsigned long long ptr);
int		ft_print_hex_nbr_pf(unsigned int n, int upper, int initlen);

/* ************************************************************************** */
/* FT_PRINTF                                                                  */
/* ************************************************************************** */
char	*get_next_line(int fd);
// GNL - Utils
size_t	ft_strlen_gnl(const char *str);
char	*ft_strjoin_gnl(char const *s1, char const *s2);
char	*ft_strchr_gnl(const char *str, int c);
char	*ft_strdup_gnl(const char *str);
size_t	ft_strlcpy_gnl(char *dst, const char *src, size_t dstsize);

#endif
