#include"main.h"
/**
  *
  *
  *
  */
void liberar(char *l)
{
	if (l == NULL)
	{
		exit(EXIT_SUCCESS);
	}
	else
	{
		free(l);
	}
}
