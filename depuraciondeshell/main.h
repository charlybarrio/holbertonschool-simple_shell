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
void ffree(char **p);
 void it(char * comando);
char * ensamblarlocation(char * pathcopy, int comlen, char * command);
char ** creatematriz(char ** matriz, char * paratokenizar, const char * delim, int numerodetoken);
char * allocatememorychar( ssize_t caracteres);
int numoftoken(char * lineptr, const char *delim);
ssize_t printprompt(char * prompt);
int execmd(char **argv, char * a, char * b);
char *get_location(char *comando);
 void free_grid(char **grid, int height);
#endif
