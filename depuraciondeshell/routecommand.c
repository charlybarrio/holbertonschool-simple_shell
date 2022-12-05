#include"main.h"
/**
  *
  *
  *
  */
char * ensamblarlocation(char * pathcopy, int comlen, char * command)
{
	char *path_token,  *filepath;
	int dlen = 0;
	struct stat buffer;

	path_token = strtok(pathcopy, ":");

	while (path_token != NULL)
	{
		dlen = strlen(path_token);
		
		filepath = malloc((dlen + comlen + 3));
				if (filepath = NULL)
				{
				return (0);
				}


		strcpy(filepath, path_token);
		strcat(filepath, "/");
		strcat(filepath, command);
		strcat(filepath, "\0");
		
		if (stat(filepath, &buffer) == 0)
		{
		free(pathcopy);
		return (filepath);
		}
		else
		{
		free(filepath);
		path_token = strtok(NULL, ":");
		}

	}
	free(pathcopy);
	return (NULL);
}

