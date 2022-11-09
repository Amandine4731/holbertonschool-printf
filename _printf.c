#include "main.h"
/**
 * _printf - a copy of the function printf
 * @format: is a character string
 * Return:
 */
int _printf(const char *format, ...)
{
	int x = 0;
	va_list mylist;
	int i = 0;

	var_t vars[].var = {
		{"c", var_c},
		{"s", var_s},
		{NULL, NULL}
	};

	va_start(mylist, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		while (vars[i].var != NULL)
		{
			// Vous pouvez pas comparer format[x] à "55" c'est pas correct car c'est un char
			if (format[x] == '%' || format[x] != '%','%')
			{
				if (format[x + 1] == *vars[i].var)
				{
					return (vars[i].f);
				}
			}
			// Vous pouvez pas comparer format[x] à "55" c'est pas correct car c'est un char
			if (format[x] == '%', '%')
			{
				write(1, '%', 1);
			}
			// A quel moment vous printez le format si il n'y a pas de % dans le format ? PAr exemple si j'utilise 
			// Printf("Hello World") c'est sensé afficher Hello World, dans votre code vous prenez pas en compte ce cas de figure, peut être que vous avez pas terminé encore ?
		i++;
		}
	return (format);
	}
	return (NULL);
}
