#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "/bin/sh";
	char *lineptr;
	size_t n = 0, controldeerror;;

	while (1)
	{
	printf("%s", prompt);
controldeerror = getline(&lineptr, &n, stdin);
if (controldeerror == -1)
{
	return (-1);
}
	printf("%s\n", lineptr);
	}
	free(lineptr);
	
	return (0);
}
