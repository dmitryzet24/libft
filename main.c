/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:03:02 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/22 22:02:08 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_st.h"
#include "libft.h"


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
		return (0);
		
}
