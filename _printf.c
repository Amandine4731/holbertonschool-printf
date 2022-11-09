#include "main.h"
/**
 * _printf - a copy of the function printf
 * @format: is a character string
 * Return: The length of printed chars
 */
int _printf(const char *format, ...)
{
	int x = 0;
	va_list mylist;
	int i = 0;
	int len = 0;

	var_t vars[] = {
		{'c', var_c},
		{'s', var_s},
		{0, NULL}
	};

	va_start(mylist, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%') 
		{
			for (i = 0; vars[i].var != 0; i++)
			{
				if (format[x + 1] == vars[i].var)
				{
					len += vars[i].f(mylist);
				}
			}
		} 
		else{
			len += write(1, &format[x], 1);
		}
	}
	va_end(mylist);
	return len;
}
