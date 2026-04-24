/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:43:39 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/24 19:37:16 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char*)dest;	
	
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (n > 0)
			{
				n--;
				d[n] = s[n];
			}
	return (dest);
}

