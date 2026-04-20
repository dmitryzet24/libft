#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h> // for printf

int		ft_isalpha(int c);
int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif