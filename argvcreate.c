#include"main.h"
/**
  * creatematriz - allocate memory for array of pointers.
  * @m: matriz double pointer to argv.
  * @tokenizar: line read at stdin.
  * @delim: delimiter for tokenizar.
  * @ntoken: numbers os string tokenizados.
  * Return: pointer to memory allocate.
  */
char **creatematriz(char **m, char *tokenizar, const char *delim, int ntoken)
{
	char *token;
	int i = 0;

	m = malloc(sizeof(char *) * ntoken);

	token = strtok(tokenizar, delim);

	for (i = 0; token != NULL; i++)
		{
		m[i] = _strdup(token);
		token = strtok(NULL, delim);
		}

	m[i] = NULL;
	free(token);

	return (m);

}
