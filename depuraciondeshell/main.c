#include "main.h"

int main(__attribute__((unused)) int ac, char **argv){
    
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    const char *delim = " \n";
    int num_tokens = 0;
    
    
    /* Create a loop for the shell's prompt */
    while (1) {
        
		write(1,"hsh$:  ", 7);
        nchars_read = getline(&lineptr, &n, stdin);

   
        lineptr_copy = allocatememorychar(nchars_read);

        strcpy(lineptr_copy, lineptr);

       
        num_tokens = numoftoken(lineptr, delim);/**n of token*/


        argv = creatematriz(lineptr_copy, delim, num_tokens);
		execmd(argv);
	}
	    free(argv);
        free(lineptr);
		free(lineptr_copy);
	
     
    return (0);
}

