/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:53:41 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/27 21:27:29 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t	count_len(int n)
{
	size_t	i;
	long	n1;

	i = 0;
	n1 = (long)n;
	if (n1 > 0)
	{
		while (n1 > 0)
		{
			n1 /= 10;
			i++;
		}
	}
	else if (n1 == 0)
		i = 1;
	else
	{
		n1 *= -1;
		while (n1 > 0)
		{
			n1 /= 10;
			i++;
		}
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		i;
	
	str = (char *)malloc(sizeof(char) * (count_len(n) + 1));
	if (!str)
		return (NULL);
}