#include "main.h"
/**
 * var_c - to print a character
 * @mylist: name of my list of arguments
 * Return: char
 */
int var_c(va_list mylist)
{
	int c = va_arg(mylist, int);

	return (write(1, &c, 1));
}
/**
 * var_s - to print a string
 * @mylist: name of my list of arguments
 * Return: string
 */
int var_s(va_list mylist)
{
	char *s = va_arg(mylist, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	return (write(1, s, _strlen(s)));

}
