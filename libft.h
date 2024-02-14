/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fturk <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:46:52 by hdemirel          #+#    #+#             */
/*   Updated: 2023/07/22 18:19:39 by fturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
int		ft_toupper(int x);
int		ft_tolower(int x);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t x);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *pointer, int modifier, size_t length);
void	*ft_memchr(const void *ptr, int value, size_t byts);
void	*ft_memcpy(void *dest, const void *source, size_t x);
void	*ft_memmove(void *dest, const void *source, size_t x);
void	*ft_calloc(size_t unit, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *source, size_t x);
size_t	ft_strlcat(char *dest, const char *source, size_t lmt);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *str, char c);

#endif
