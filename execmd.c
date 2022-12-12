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
char *command = argv[0];
int status;

	if (command == NULL)
	{
	free(a), ffree(argv);
	exit(EXIT_SUCCESS);	}
if (_strcmp(command, "exit") == 0)
	{
	free(a), free(b), ffree(argv);
	exit(EXIT_SUCCESS);	}
pid = fork();
while (1)
{
	if (pid == 0)
	{
		if (_strcmp("env", argv[0]) == 0)
		{	ffree(argv), free(a), free(b);
			_printenv(), putchar('\n');
			exit(EXIT_SUCCESS);	}
		if (execve(argv[0], argv, environ) == -1)
		{
			perror(argv[0]), ffree(argv), free(a), free(b);
			exit(EXIT_FAILURE);	}	}
else if (pid < 0)
	perror("43 Error: ");
else /** if it isnt 0 or -1 then the parent waits for child to die*/
	{ /** use a do here so it runs once before checking */
		do {
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));	}
	ffree(argv), free(a);
	return (1);	}
return (0);	}
