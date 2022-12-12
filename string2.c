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
int arr1;
int arr2;

for (arr2 = 0; dest[arr2] != '\0'; arr2++)
{}
for (arr1 = 0; src[arr1] != '\0'; arr1++)
{
dest[arr2 + arr1] = src[arr1];
}
dest[arr2 + arr1] = '\0';
return (dest);
}
/**
* printenv - function that prints enviroment.
* Return: 0 in success.
*/

int printenv(void)
{

	while (*environ)
	{
		printf("%s\n", *environ);
		environ++;
	}
	return (0);
}
