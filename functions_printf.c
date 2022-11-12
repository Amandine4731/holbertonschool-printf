#include "main.h"
/**
 * var_c - to print a character
 * @mylist: name of my list of arguments
 * Return: char
 */
int var_c(va_list mylist)
{
	int c = va_arg(mylist, int);

	putchar(c);
	return (1);
}
/**
 * var_s - to print a string
 * @mylist: name of my list of arguments
 * Return: string
 */
int var_s(va_list mylist)
{
	int i = 0;
	char *s = va_arg(mylist, char *);

	if (s == NULL)
	{
		s = "(NULL)";
		i++;
	}
	else
	{
		for (i = 0; s[i]; i++)
		{
			putchar(s[i]);
		}
	}
	return (1);
}
