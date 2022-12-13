#include "main.h"
/**
  * execmd - function to execute command-
  * @argv: array of route.
  * @a: pointer to free.
  * @b: pointer to freed.
  * Return: 1 in success otherwhise exit_failure.
  */
int execmd(char **argv, char *a, char *b)
{
	pid_t pid;
	char *acommand = argv[0]; /**command = argv[0], *acommand;*/
	int status;

	if (acommand == NULL)
	{
		free(a), ffree(argv);
		return (1);	}
	if (_strcmp(acommand, "exit") == 0)
	{
		free(a), free(b), ffree(argv);
		exit(EXIT_SUCCESS);	}
	while ((acommand = get_location(argv[0])) == NULL)
	{
		ffree(argv), free(a);
		return (1);	}
	pid = fork();
	while (1)
	{
		if (pid == 0)
		{
			if (_strcmp("env", argv[0]) == 0)
			{
				ffree(argv), free(a), free(b), free(acommand);
				_printenv(), putchar('\n');
				exit(EXIT_SUCCESS);	}
			if (execve(acommand, argv, environ) == -1 || pid < 0)
			{
			free(acommand), ffree(argv), free(a), free(b), perror("42 Error: ");
			exit(EXIT_FAILURE);	}	}
	else
	{
		do {
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));	}
	if (acommand != argv[0])
	free(acommand);
	ffree(argv), free(a);
	return (1);	}
return (0);	}
