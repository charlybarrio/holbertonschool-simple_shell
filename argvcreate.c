#include"main.h"
/**
  *
  *
  *
  *
  *
  */
char ** creatematriz(char * paratokenizar, const char * delim, int numerodetoken)
{
	char *token;
	int i = 0;
	char **av = malloc(sizeof(char*) * numerodetoken + 1);
	
	token = strtok(paratokenizar, delim);

	for (i = 0; token != NULL; i++)
		{
		 av[i] = malloc(sizeof(char) * strlen(token));
		strcpy(av[i], token);
		
		token = strtok(NULL, delim);
		}
	av[i] = NULL;

	return (av);

}
