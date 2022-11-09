#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct var - Struct var
 *
 * @var: The type of variable
 * @f: The function associated
 */
typedef struct var
{
	char var;
	int (*f)(va_list mylist);
} var_t;

int var_c(va_list mylist);
int var_s(va_list mylist);
int _strlen(char *s);
int _printf(const char *format, ...);
#endif
