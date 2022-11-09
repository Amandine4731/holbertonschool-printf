#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct var - Struct var
 *
 * @var: The type of variable
 * @f: The function associated
 */
typedef struct var
{
	char *var;
void (*f)(va_list mylist);
} var_t;

void var_c(va_list mylist);
void var_s(va_list mylist);

int _strlen(char *s)
int _printf(const char *format, ...);
#endif
