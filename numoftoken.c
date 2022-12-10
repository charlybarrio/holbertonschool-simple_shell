#include"main.h"
/**
  * numoftoken - number of element tokenizer.
  * @lineptr: line read.
  * @delim: delimitador para tokenizar.
  * Return: number of token.
  */
int numoftoken(char *lineptr, const char *delim)
{
	char *token;
	int numt;

token = strtok(lineptr, delim);

while (token != NULL)
{
numt++;
token = strtok(NULL, delim);
}
numt++;
free(token);
return (numt);
}

