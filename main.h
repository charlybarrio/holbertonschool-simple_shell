#ifndef MAIN
#define MAIN

#define CWDBUFF 128
#define COMBUFF 128
#define PATBUFF 256

#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/syscall.h>
#include<errno.h>
#include <sys/wait.h>

extern char **environ;

char *_getenv(char *envy);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *dest, char *src);
void ffree(char **p);
char **creatematriz(char **m, char *tokenizar, const char *delim, int ntoken);
int numoftoken(char *lineptr, const char *delim);
int execmd(char **argv, char *a, char *b);
char *get_location(char *comando);
char *_strcpy(char *dest, char *src);
#endif
