#include "main.h"
void execmd(char **argv)
{
	pid_t pid;
        char *command = NULL;
	int status;

	pid = fork();/**copy the id of the father process*/
	command = argv[0];

	if (strcmp(command, "exit")== 0)
	{
		printf("Exiting shell ....\n");
		exit(EXIT_SUCCESS);
	}

	if (pid == 0)
	{
		if (execvp(command, argv) == -1)
			printf("pid 0 Error: ");
		exit(EXIT_FAILURE);
	}
	if (pid < 0)
		printf("pid < 0 Error: ");
	else /** The parent waits for child to die*/
	{ 
		do
		{
			pid = waitpid(pid, &status, WUNTRACED);
		}
	       	while
			(!WIFEXITED(status) && !WIFSIGNALED(status));
			/** Use the wifexited and wifsignaled to check if child
			was exited or cancelled. so parent can stop waiting*/
	}
}
