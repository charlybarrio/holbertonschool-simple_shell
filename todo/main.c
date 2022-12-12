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
const char *delim = " \t\r\n\a";
size_t n = 0;
int num_tokens = 0, nchars = 0;

	while (1)
	{
if (isatty(0))
	{
	write(STDOUT_FILENO, "($) ", 5);
	}
		nchars = (getline(&lineptr, &n, stdin));
	if (nchars == -1)
	{ 
return (1);
	}
	lcopy = _strdup(lineptr);
		num_tokens = numoftoken(lineptr, delim);
	execmd(creatematriz(argv, lcopy, delim, num_tokens), lcopy, lineptr);
	}
return (EXIT_SUCCESS);
}

