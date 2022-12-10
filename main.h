#ifndef MAIN
#define MAIN
 #include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/syscall.h>
#include<errno.h>
#include <sys/wait.h>
 void it(char * comando);
char * ensamblarlocation(char * pathcopy, int comlen, char * command);
char ** creatematriz(char * paratokenizar, const char * delim, int numerodetoken);
char * allocatememorychar( ssize_t caracteres);
int numoftoken(char * lineptr, const char * delim);
ssize_t printprompt(char * prompt);
void execmd(char **argv);
char *get_location(char *comando);
#endif
