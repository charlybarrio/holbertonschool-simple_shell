#include "main.h"

char *get_location(char *command)

{
    char *path, *path_copy, *loca;
    int comlen;
    struct stat buffer;

    path = getenv("PATH");/** trae el variable de entorno*/

    if (path){
        
        path_copy = strdup(path);
        
        comlen = strlen(command);
		
		loca = malloc(sizeof(char) * (comlen + 25));
		loca = ensamblarlocation(path_copy, comlen, command);

    
     if (stat(command, &buffer) == 0)
        {
            return (command);
        }


        return (NULL);

    }

	free(loca);
    return (loca);
}

