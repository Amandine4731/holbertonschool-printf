#include "main.h"
/**
 * _printf - a copy of the function printf
 * @format: is a character string
 * Return: The length of printed chars
 */
int _printf(const char *format, ...)
{
	int x, i;
	int len = 0;
	va_list mylist;
	var_t vars[] = {
		{'c', var_c},
		{'s', var_s},
		{0, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(mylist, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%' && format[x + 1] == '%')
		  {
		  len += write(1, &format[x], 1);
		  x++;
		  }
		else if (format[x] == '%')
		{
			for (i = 0; vars[i].var != 0; i++)
			{
				if (format[x + 1] == vars[i].var)
				{
					len += vars[i].f(mylist);
					x++;
					break;
				}
			}
			if (vars[i].var == 0)
			{
				len += write(1, &format[x], 1);
				len += write(1, &format[x + 1], 1);
				x += 1;
			}
		}
		else
			len += write(1, &format[x], 1);
	}
	va_end(mylist);
	return (len);
}
