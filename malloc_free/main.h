#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <string.h>

int _putchar();
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_gri(int **grid, int height);

#endif
