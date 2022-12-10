#include"main.h"
/**
  *
  *
  *
  */
char * allocatememorychar( ssize_t caracteres)
{
	char * memreservada = malloc(sizeof(char)* caracteres + 1);
	
	if (memreservada == NULL)
	{
		perror("memory allocattion error");
		exit(-1);
	}
	free(memreservada);
	return (memreservada);
}
