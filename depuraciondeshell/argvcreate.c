#include"main.h"
/**
  *
  *
  *
  *
  *
  */
char ** creatematriz(char **matriz, char * paratokenizar, const char * delim, int numerodetoken)
{
	char *token;
	int i = 0;
	matriz = malloc(sizeof(char *) * numerodetoken);
	token = strtok(paratokenizar, delim);

	for (i = 0; token != NULL; i++)
		{
		 matriz[i] = strdup(token);
		token = strtok(NULL, delim);
		}
	matriz[i] = NULL;
	free(token);

	return (matriz);

}
