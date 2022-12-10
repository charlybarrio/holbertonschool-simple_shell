#include "main.h"
/**
  * main - functions principal.
  * @ac: number of argument.
  * @argv: argument vector.
  * Return: in succes EXIT_SUCCESS | EXIT_FAILURE
  */
int main(__attribute__((unused)) int ac, char **argv)
{
char *lineptr = NULL, *lcopy = NULL;
const char *delim = "  \t\r\n\a";
size_t n = 0;
int num_tokens = 0;

	while (1)
	{
	write(STDOUT_FILENO, "($) ", 5);
		if (getline(&lineptr, &n, stdin) == -1)
		{
			if (feof(stdin))
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				exit(EXIT_FAILURE);
			}
		}
	lcopy = _strdup(lineptr);
		num_tokens = numoftoken(lineptr, delim);
	execmd(creatematriz(argv, lcopy, delim, num_tokens), lcopy, lineptr);
	}
return (EXIT_SUCCESS);
}

