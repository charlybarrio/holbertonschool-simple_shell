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
char acommand /**command = argv[0], *acommand;*/
int status;

if (_strcmp(argv[0], "exit") == 0)
	{
	free(a), free(b), ffree(argv);
	exit(EXIT_SUCCESS);
	}
	if (argv[0] == NULL)
		{
		free(a), ffree(argv);
		return (1);
		}
	acommand = get_location(argv[0]);
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
			exit(EXIT_FAILURE);
		}
		
	}
else
	{
		do {
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		
	}
	ffree(argv), free(a);
	(acommand == argv[0]) ? printf("final") : printf("final2"), free(acommand);
	return (1);	}
return (0);	}
