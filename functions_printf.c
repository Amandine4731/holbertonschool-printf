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
/**
 * var_d - to print an interger
 * @mylist: name of my list of arguments
 * Return: integer
 */
int var_d(va_list mylist)
{
	int d = va_arg(mylist, int) + '0';

	return (write(1, &d, 1));
}
/**
 * var_i - to print an interger
 * @mylist: name of my list of arguments
 * Return: integer
 */
int var_i(va_list mylist)
{
	int d = va_arg(mylist, int) + '0';

	return (write(1, &d, 1));
}
/**
 * _INT_MIN - number min
 */
void _INT_MIN(void)
{
	write(1, "-2147483648", 11); 
}
/**
 * _INT_MAX - number max
 */
void _INT_MAX(void)
{
	write(1, "2147483648", 10); 
}
