#include "libft_st.h"
#include "libft.h"

int	test_int_f_int()
{
	pid_t	pid = fork();

	if (pid == 0) {
		printf("Child process\n");
		exit (0);
	}
	else {
		int	status;
		printf("Parent process\n");
		waitpid(pid, &status, 0);
		if (WIFSIGNALED(status)) {
			printf("The test crashed\n");
			return (1);
		}
	}
	return(0);
}

int main(){
	int	numbers[] = {1, 0, 257, (-256)};

	test_int_f_int();
	return (0);
}

