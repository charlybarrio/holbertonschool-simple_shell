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
void execmd(char **argv);
char *get_location(char *comando);
#endif
