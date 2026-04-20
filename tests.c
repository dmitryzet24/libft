void	test_int_f_int()
{
	pid_t	pid = fork();

	if (pid == 0) {
		// Custom code here
		exit (0);
	}
	else {
		int	status;

		waitpid(pid, &status, 0);
		id (WIFSIGNALED(status)) {
			printf("The test crashed\n");
		}
	}
}