#include "libft.h"

// The difference btw ft_ striteri and ft_strmapi is that first one 
// returns THE SAME string, while the second a NEW str

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
