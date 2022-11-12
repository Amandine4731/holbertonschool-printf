#include "main.h"
/**
 * _printf - a copy of the function printf
 * @format: is a character string
 * Return: the good format and his lenght
 */
int _printf(const char *format, ...)
{
	int i = 0, x = 0, decrem = 0, len = 0;
	va_list mylist;

	if (format == NULL || (format[0] == '%' && format[1] == '%'))
		return (-1);

	va_start(mylist, format);

	while (format[x])
	{
		if ((format[x + 1] == 0 || format[x + 1] == '%') && format[x] == '%')
		{
			putchar('%');
			x++;
			i++;
		}
		else if (format[x] == '%')
		{
			decrem++;
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
	len = len - decrem + i;
	return (i);
}
