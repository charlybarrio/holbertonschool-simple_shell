# Project simple shell

### Content

> Index

- [Description](#Description)
- [Dependencies](#Dependencies)
- [Files](#Files)
- [Flowchart](#Flowchart)
- [Team](#Team)

### Description

The program is a command-line interpreter, this means that the shell is a traductor between the user and the system. 

Take the user input through the keyboard and displays the outputin the screen (in form of standard input)

Our shell is a version that works like th sh shell with all the functionalitis and a primitive interface.

### Dependencies

- The Shell was coded on an Ubuntu 20.04 LTS machine with gcc version 4.8.4.
- The gcc code to compile is: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
- It's execute with ./hsh

### Files 
- **AUTHORS** : List of Contributors
- **_getenv.c** : get the environment
- **argvcreate.c** : It allocate the necessary memory for array of pointer
- **execmd.c** : function that execute command
- **ffree.c** : frees the arrays
- **location.c** : It gives you the absolute route
- **main.c** :  Function that contains the main code, it coordinates the execution of programs and alternate between interactive and non-interactive shell
- **main.h** : Header files
- **man_simple_shell** : Manual of the simple shell
- **numoftoken.c** : It is a counter of the elements to be tokenizer
- **string.c** : Auxiliar funcionts for the strings
- **string2.c** : More auxiliar functions.

### Example

![shell1](https://user-images.githubusercontent.com/113919382/207421169-7078842c-d28c-40fd-a3f4-0301c140b816.png)

### Flowcharts

![Flowcharts - Page 1](https://user-images.githubusercontent.com/113919382/206513016-c0f65765-d3c7-4a89-a783-5b7ae431878d.png)

### Team:

* Carlos Barrio [charlybarrio](https://github.com/charlybarrio)
* Martin Poggio [EliasMartincorre](https://github.com/EliasMartincorre)
