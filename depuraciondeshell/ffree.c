#include"main.h"
/**
  * ffree - free array to dimension.
  * @pp: pointer to array to be freed.
  */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
