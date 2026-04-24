/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:03:02 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/24 19:54:53 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_st.h"

int	main(void)
{  	
		int	numbers[] =
			{
			'A', 'Z', 'a', 'z', 'M', 'q',
			'@', '[', '`', '{',
			'0', '9', '5',
			'/', ':',
			' ', '\n', '\t', '!', '.',
			0, 127, 255, -1, 512, -42
			};
		int size = sizeof(numbers) / sizeof(numbers[0]);

		test_int_f_int(numbers, size, isalpha, "isalpha", ft_isalpha, "ft_isalpha");
		test_int_f_int(numbers, size, isdigit, "isdigit", ft_isdigit, "ft_isdigit");
		test_int_f_int(numbers, size, isascii, "isascii", ft_isascii, "ft_isascii");
		test_int_f_int(numbers, size, isalnum, "isalnum", ft_isalnum, "ft_isalnum");
		test_int_f_int(numbers, size, isprint, "isprint", ft_isprint, "ft_isprint");
		test_int_f_int(numbers, size, toupper, "toupper", ft_toupper, "ft_toupper");
		test_int_f_int(numbers, size, tolower, "tolower", ft_tolower, "ft_tolower");
		//ft_strlen TEST
		//ft_strncmp TEST
		//ft_strcpy TEST
		//ft_memset TEST
		//ft_bzero TEST
		//ft_memmove TEST
		//ft_strlcat TEST
		return (0);
		
}
