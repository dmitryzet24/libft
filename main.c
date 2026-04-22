#include "libft.h"
#include "libft_st.h"

int   	main(void)
{  	
		int	numbers[] = {121, 0 , -300000000, + 300000000, 71};
		int	*num_arr;
		int size = sizeof(numbers) / sizeof(numbers[0]);

		num_arr = numbers;

		test_int_f_int(numbers, 5, isalpha, "isalpha", ft_isalpha, "ft_isalpha");
		test_int_f_int(numbers, 5, isdigit, "isdigit", ft_isdigit, "ft_isdigit");
		return (0);
}
