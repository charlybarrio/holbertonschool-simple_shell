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

/**                                                                        
 * _strdup - returns a pointer to a newly allocated space in memory        
 * @str: string                                                            
 * Return: pointer of an array of chars                                    
 */                                                                        
char *_strdup(char *str)                                                   
{                                                                          
        char *strdup;                                                      
        unsigned int i, j;                                                 
                                                                           
        if (str == NULL)                                                   
                return (NULL);                                             
                                                                           
        for (i = 0; str[i] != '\0'; i++)                                   
                ;                                                          
                                                                           
        strdup = (char *)malloc(sizeof(char) * (i + 1));                   
        if (strdup == NULL)                                                
                return (NULL);                                             
        for (j = 0; j <= i; j++)                                           
                strdup[j] = str[j];                                        
        return (strdup);                                                   
}
/**
 *    _strncat - Concatenates two strings using at most
 *    an inputted number of bytes from src.
 *    * @dest: The string to be appended.
 *    * @src: The string to be appended to dest.
 *    * @n: The number of bytes from src to be appended to dest.
 *    * Return: A pointer to the resulting dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
/**
 * _strcpy - Copies the contents of a string to another string
 *
 * @src: Characters will be copied FROM this string
 * @dest: Characters will be copied TO this string.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i, c;
	char *a;

	c = i = 0;
	for (; src[i] != '\0'; i++)
		c++;
	for (i = 0; c > -1; c--)
	{
		dest[i] = src[i];
		i++;
	}
	a = dest;
	return (a);
}

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
