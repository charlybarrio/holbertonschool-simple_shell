#include"main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: String to be expanded
 * @src: text to be pasted into previous string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, c;
	char *a;

	c = -1;
	for (i = 0; dest[i] != '\0'; i++)
		;
	while (src[++c])
	{
		dest[i] = src[c];
		i++;
	}
	a = dest;
	return (a);
}
/**
 * printenv - function that prints enviroment
 */
void printenv(void)
{
	unsigned int i;
	unsigned int x = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
	}
	while (x <= i)
	{
		write(1, environ[x], _strlen(environ[x]));
		putchar('\n');
		x++;
	}
	free(environ);
}
