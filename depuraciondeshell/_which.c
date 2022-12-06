#include "main.h"

char *get_location(char *command)

{
    char *path, *path_copy, *loca = NULL;
    int comlen;
    struct stat buffer;

    path = getenv("PATH");/** trae el variable de entorno*/

    if (path){
        
        path_copy = strdup(path);

        comlen = strlen(command);
		
		loca = malloc(sizeof(char) * (comlen + 15));
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

