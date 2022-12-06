#include "main.h"

int main(__attribute__((unused)) int ac, char **argv){
    
    char *lineptr = NULL, *lineptr_copy = NULL;
    size_t n = 0;
    ssize_t nchars_read;
    const char *delim = " \n";
    int num_tokens = 0;
    
    
    /* Create a loop for the shell's prompt */
    while (1) {
        
		write(STDOUT_FILENO,"($) ", 5);
        nchars_read = getline(&lineptr, &n, stdin);
	
  	
        lineptr_copy = allocatememorychar(nchars_read);

        strcpy(lineptr_copy, lineptr);

       
        num_tokens = numoftoken(lineptr, delim);/**n of token*/
	
	 
        argv = creatematriz(lineptr_copy, delim, num_tokens);
		free(lineptr_copy);	 
		execmd(argv, lineptr);
	}	
	
     
    return (0);
}

