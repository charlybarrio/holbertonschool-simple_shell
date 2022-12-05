#include"main.h"
/**
  *
  *
  *
  */
char * allocatememorychar( ssize_t caracteres)
{
	char * memreservada = malloc(sizeof(char)* caracteres);
	
	if (memreservada == NULL)
	{
		perror("memory allocattion error");
		exit(-1);
	}
	return (memreservada);
}
