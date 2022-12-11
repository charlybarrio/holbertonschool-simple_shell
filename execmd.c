#include "main.h"
/**
  * execmd - function to execute command-
  * @argv: array of route.
  * @a: pointer to free.
  * @b: pointer to freed.
  * Return: 1 in success otherwhise exit_failure.
  */
int execmd(char **argv, char *a, char *b)
{		/**wpid is just here to catch the stack before its destroyed*/
pid_t pid;
char *command = argv[0];
int status, x;
char *FullPath = NULL, *TokenPath[PATBUFF], NewPath[COMBUFF];

	if (command == NULL)
	{
	free(a);
	ffree(argv);
	return (1);
	}
if (_strcmp(command, "exit") == 0)
	{
	free(a);
	free(b);
	ffree(argv);
	exit(EXIT_SUCCESS);
	}
pid = fork();
if (pid == 0)
	{
	FullPath = _getenv("PATH");
	*TokenPath = strtok(FullPath, ":");
		for (; *TokenPath != NULL ;)
		{
			for (x = 0; x < COMBUFF; x++)
				NewPath[x] = 0;
			_strcpy(NewPath, *TokenPath);
			_strcat(NewPath, "/");
			_strcat(NewPath, argv[0]);
			execve((const char *)NewPath, argv, NULL);
			*TokenPath = strtok(NULL, ":");
			if (!*TokenPath)
				break;
		}
		perror("42 Error: ");
		exit(EXIT_FAILURE);
	}
else if (pid < 0)
	perror("43 Error: ");
else /** if it isnt 0 or -1 then the parent waits for child to die*/
	{ /** use a do here so it runs once before checking */
		do {
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	ffree(argv);
	free(a);
	return (1);
}
