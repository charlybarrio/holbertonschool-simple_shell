#include "main.h"
/**
 * _getenv - gets the environment
 *
 * @envy: name of the environment you want
 *
 * Return: Pointer to environment string
 */
char *_getenv(char *envy)
{
	int i = 0;

	while (environ[i++])
		if (_strcmp(environ[i], envy) == '=')
			break;
		else if (environ[i] == NULL)
			perror("Error");

	return (environ[i]);
}
