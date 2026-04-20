#ifndef LIBFT_ST_H
# define LIBFT_ST_H

#include <stdlib.h> 	// For exit()
#include <unistd.h> 	// For fork()
#include <sys/wait.h> 	// For waitpid()

#include <string.h> 	// For strlcpy(), strlen(), strncmp()
#include <ctype.h> 		// For isalpha(), isdigit(), tolower(), toupper()



int	isalpha(int c);
int	isdigit(int c);
size_t strlcpy(char *dst, const char *src, size_t size)
size_t	strlen(const char *s);
int		strncmp(const char *s1, const char *s2, size_t n);
int		toupper(int c);
int		tolower(int c);

#endif