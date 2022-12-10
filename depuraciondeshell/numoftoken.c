#include"main.h"
/**
  *
  *
  *
  */
int numoftoken(char * lineptr,const char *delim)
{
 char *token;
 int numt;

 token = strtok(lineptr, delim);
 
 while (token != NULL)
 {
	 numt++;
token = strtok(NULL, delim);
 }
 numt++;
 free(token);
 return (numt);
}
