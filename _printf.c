#include "main.h"
#include <string.h>
/**
 * _printf - a copy of the function printf
 * @format: is a character string
 * Return: the good format and his lenght
 */
int _printf(const char *format, ...)
{
	int i = 0, x;
	va_list mylist;

	if (!format || !strcmp(format, "%"))
	{
		return (-1);
	}
	va_start(mylist, format);
	/**
	 * if (format == NULL || (format[0] == '%' && format[1] == '%'))
	 * return (-1);
	 */
	x = 0;
	while (format[x])
	{
		if ((format[x + 1] == 0 || format[x + 1] == '%') && format[x] == '%')
		{
			putchar('%');
			i++;
			x++;
		}
		else if (format[x] == '%')
		{
			i += get_functions_printf(mylist, format[x + 1]);
			x++;
		}
		else
		{
			i += 1;
			putchar(format[x]);
		}
		x++;
	}
	va_end(mylist);
	return (i);
}
