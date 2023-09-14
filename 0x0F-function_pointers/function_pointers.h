#ifndef FUNC_C
#define FUNC_C

#include <stddef.h>

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));


#endif
