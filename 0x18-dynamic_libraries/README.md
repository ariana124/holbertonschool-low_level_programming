# Dynamic libraries


### General

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

### Requiremnents

#### Bash Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- All scripts were tested on Ubuntu 14.04 LTS
- All files must be executable
- The first line of all your files should be exactly `#!/bin/bash`

#### C
- Allowed editors: `vi`, `vim`, `emacs`
- All files were compiled on Ubuntu 14.04 LTS
- All programs and functions were compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- Code follows the [Betty](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) [Style](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- No more than 5 functions per file
- Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- Prototypes of all your functions should be included in your header file called `holberton.h`

### Tasks

0. Create the dynamic library `libholberton.so` containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
1. Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
2. Write a blog post describing the differences between static and dynamic libraries. It should cover:
    - Why to use libraries in general
    - How do they work
    - How to create them (Linux only)
    - How to use them (Linux only)
    - What are the differences between static and dynamic libraries
    - What are the advantages and drawbacks of each of them
    
> [And here's the blog post](https://medium.com/@arianabibiano/dynamic-v-static-libraries-e1a877818298)
