#include"main.h"
/**
*_strlen - string length
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int largo = 0;

for (; *s != '\0'; s++)
{
largo++;
}
return (largo);
}
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equals
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
