/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:53:22 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/24 20:19:56 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			result;
	unsigned int	s;
	unsigned int	d_len;
	
	d_len = (unsigned int)ft_strlen(dest);
	result = d_len + size;
	s = (unsigned int)size;
	if (!s)
		return ((size_t)result);
	else
	{
		while (src[s] != '\0')
			dest[d_len] = 
	}
	
	return ((size_t)result);
}
