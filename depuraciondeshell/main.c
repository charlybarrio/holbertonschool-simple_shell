#include "main.h"

int main(__attribute__((unused)) int ac, char **argv){
    
    char *lineptr = NULL, *lineptr_copy = NULL;
	const char *delim = "  \t\r\n\a";
    size_t n = 0;
    int num_tokens = 0;
  
    
    /* Create a loop for the shell's prompt */
    while (1) {
        
		write(STDOUT_FILENO,"($) ", 5);
        if(getline(&lineptr, &n, stdin)== -1)
		{
			if (feof(stdin))
			{
				exit(EXIT_SUCCESS);
			}
			else
			{
				exit(EXIT_FAILURE);
			}
		}
        lineptr_copy = strdup(lineptr);
        num_tokens = numoftoken(lineptr, delim);/**n of token*/
	/**	argv =*/execmd( creatematriz(argv, lineptr_copy, delim, num_tokens), lineptr_copy, lineptr); 
	
        
	/**	free(lineptr);*/
		 
		/**execmd(argv);*/
	}

/**free(lineptr_copy);si libera memoria en los casos que no se usa excev
free(lineptr);si estan liberando memoria*/
     
    return (EXIT_SUCCESS);
}

