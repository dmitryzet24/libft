#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>

int		ft_isalpha(unsigned char *str);
int		ft_isdigit(unsigned char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);



#endif