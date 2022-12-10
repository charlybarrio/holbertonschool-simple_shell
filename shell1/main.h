#ifndef MAIN_H
#define MAIN_H

extern char **environ;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
void execmd(char **argv);
int main(int ac, char **argv);

#endif
