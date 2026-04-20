#include "libft.h"
#include "libft_st.h"
//#include "libft.a"
#include <stdio.h> 		// for printf
#include <ctype.h> 		//for isalpha

int	main(void)
{
/* ft_isalpha*/
	int	c = 122;
	int	res;

	res = isalpha(c); 
	printf("isalpha input %d\n", c);
	printf("isalpha output %d\n", res);
	res = ft_isalpha(c);
	printf("ft_isalpha input %d\n", c);
	printf("ft_isalpha output %d\n", res);


///* ft_isdigit*/
//	sntns[] = "sdfsdf";
//	res = ft_isdigit(sntns);
//	printf("%s\n", sntns);
//	printf("%d\n", res);
//
///* ft_strlen*/
//	printf("%d\n", ft_strlen("Hello, 42!"));
//	
//
///*ft_strlcpy*/
//	res = ft_isalpha(sntns);
//	printf("%s", sntns);
//	printf("%d", res);
//
///* ft_isdigit*/
//	sntns[] = "sdfsdf";
//	res = ft_isdigit(sntns);
//	printf("%s\n", sntns);
//	printf("%d\n", res);
//
///* ft_strlen*/
//	printf("%d\n", ft_strlen("Hello, 42!"));
//	
//
///*ft_strlcpy*/
//	char	source[] = "Moulinette, I'll beat you!";
//	char	destin[15];
//	unsigned int	n;
//
//	n = 15;
//	ft_strlcpy(destin, source, n);
//	printf("%u\n", ft_strlcpy(destin, source, n));
//	printf("%s\n", source);
//	printf("%s\n", destin);
//
///*ft_toupper*/
//	char	s[] = "dfZ-1d";
//	char	res[7];
//
//	printf("%s\n", s);
//	ft_toupper(s);
//	printf("%s\n", s);
///*ft_tolower*/
//	char	s[] = "DfZ-1HI7a";
//	char	res[7];
//
//	printf("%s\n", s);
//	ft_tolower(s);
//	printf("%s\n", s);
//
//	char	source[] = "Moulinette, I'll beat you!";
//	char	destin[15];
//	unsigned int	n;
//
//	n = 15;
//	ft_strlcpy(destin, source, n);
//	printf("%u\n", ft_strlcpy(destin, source, n));
//	printf("%s\n", source);
//	printf("%s\n", destin);
//
///*ft_toupper*/
//	char	s[] = "dfZ-1d";
//	char	res[7];
//
//	printf("%s\n", s);
//	ft_toupper(s);
//	printf("%s\n", s);
///*ft_tolower*/
//	char	s[] = "DfZ-1HI7a";
//	char	res[7];
//
//	printf("%s\n", s);
//	ft_tolower(s);
//	printf("%s\n", s);
//
///*ft_strncmp*/
//	char	string1[] = "Moulinett";
//	char	string2[] = "Normitette";
//	char	string3[] = "VS";
//	char	string4[] = "";
//
//	printf ("%d\n", ft_strcmp(string1, string2));
//	printf ("%d\n", ft_strcmp(string2, string3));
//	printf ("%d\n", ft_strcmp(string3, string4));
//	printf ("%d\n", ft_strcmp(string4, string1))//

	return (0);
}
