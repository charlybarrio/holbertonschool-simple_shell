#include "main.h"
int execmd(char **argv, char * a, char * b)
{		/**wpid is just here to catch the stack before its destroyed*/
	pid_t pid;
        char *command = argv[0];
		/**char * routecommand;*/
		int status;

	
	if (command == NULL)
	{	free(a);
		/*free(b);*/
		ffree(argv);
		return (1);
	}
	
 if (strcmp(command, "exit")== 0)
	{	free(a);
		free(b);
		ffree(argv);
		exit(EXIT_SUCCESS);
	}
	

	/**routecommand = get_location(command);*/
	pid = fork();
	/** Remember fork returns twice, 1 for parent, 0 for child*/
	if (pid == 0)
	{ 
		if (execvp(command, argv) == -1)
		{
			ffree(argv);
			free(a);
			free(b);
			perror("42 Error: ");
		exit(EXIT_FAILURE);
		}
	}
	else if (pid < 0) /** If <0, something went wrong forking*/
		perror("43 Error: ");
	else /** if it isnt 0 or -1 then the parent waits for child to die*/
	{ /** use a do here so it runs once before checking */
				do {
			pid = waitpid(pid, &status, WUNTRACED);
			/**free(routecommand);*/
			/**free (a);*/
		/**	free(b);*/
		/**	ffree(argv);*/
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
			/** Use the wifexited and wifsignaled to check if child
			was exited or cancelled. so parent can stop waiting*/
	}
	ffree(argv);
	free(a);
	return (1);
}
