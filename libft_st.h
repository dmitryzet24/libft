/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_st.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dandrush <dandrush@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:26:53 by dandrush          #+#    #+#             */
/*   Updated: 2026/04/27 12:36:18 by dandrush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ST_H
# define LIBFT_ST_H
# include <stdlib.h> 	// For exit()
# include <unistd.h> 	// For fork()
# include <sys/wait.h> 	// For waitpid()

# include <string.h> 	// For strlcpy(), strlen(), strncmp()
# include <ctype.h> 		// For isalpha(), isdigit(), tolower(), toupper()
# include <stdio.h> // for printf

# define RED		"\033[1;31m"
# define GREEN	"\033[1;32m"
# define RESET	"\033[0m"

int	test_int_f_int(
		int *arr,
		int size,
		int (*f_origin)(int),
		char *name_origin,
		int (*f_my)(int),
		char *name_my);

#endif