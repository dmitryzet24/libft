#include "libft_st.h"
#include "libft.h"

void	test_int_f_int(int *arr, int size, int (*f_origin)(int), char *name_origin, int (*f_my)(int), char *name_my)
{
	for (int i = 0; i < size; i++)
	{
		int	fd_orig[2];
		int	fd_my[2];

		pipe(fd_orig);
		pipe(fd_my);

		printf("---------------------------------------------------\n");
		printf("TEST %d/%d (input: %d)\n", (i+1), size, arr[i]);

		pid_t	pid_orig = fork(); 	// FIRST fork(standart function)
		if (pid_orig == 0) 
		{
			close(fd_orig[0]);

			int	res = f_origin(arr[i]);
			write(fd_orig[1], &res, sizeof(int));
			exit (0);
		}
		pid_t	pid_my = fork(); 	// SECOND fork(standart function)

		if (pid_my == 0)
		{
			close(fd_my[0]);
			int	res = f_my(arr[i]);
			write(fd_my[1], &res, sizeof(int));
			exit(0);
		}
		 							// PARENT
			close(fd_orig[1]);
			close(fd_my[1]);

			int	status_orig;
			int	status_my;
			int	res_orig = 0;
			int	res_my = 0;
			int	crashed_orig = 0;
			int	crashed_my = 0;

			waitpid(pid_orig, &status_orig, 0);
			waitpid(pid_my, &status_my, 0);

			if (WIFSIGNALED(status_orig))
				crashed_orig = 1;
			else
				read(fd_orig[0], &res_orig, sizeof(int));
			if (WIFSIGNALED(status_my))
				crashed_my = 1;
			else
				read(fd_my[0], &res_my, sizeof(int));
									// Output
			if (crashed_orig) 
			    printf("%-12s -> " RED "RESULT: CRASH" RESET "\n", name_origin);
			else
			    printf("%-12s -> output: %d\n", name_origin, res_orig);			
			if (crashed_my)
			    printf("%-12s -> " RED "RESULT: CRASH" RESET "\n", name_my);
			else
			    printf("%-12s -> output: %d\n", name_my, res_my);			
			if (crashed_orig || crashed_my)
			{
			    printf("STATUS: " RED "CRASHED" RESET "\n");
			}
			else if (!!res_orig == !!res_my)
			{
			    printf("STATUS: " GREEN "SUCCESS" RESET " (logic match)\n");
			}
			else
			{
			    printf("STATUS: " RED "FAIL" RESET "\n");
			
			close(fd_orig[0]); 
			close(fd_my[0]);
			}
	}

}