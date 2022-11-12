#include "main.h"
/**
 * get_functions_printf - to select the good variable function
 * @mylist: a list of arguments
 * @s: types of variable
 * Return: 2
 */
int get_functions_printf(va_list mylist, char s)
{
	var_t vars[] = {
		{'c', var_c},
		{'s', var_s},
		{'d', var_i},
		{'i', var_i},
		{'0', NULL}
	};
	int i = 0;

	while (vars[i].var)
	{
		if (s == vars[i].var)
		{
			return (vars[i].f(mylist));
		}
		i++;
	}
	putchar('%');
	putchar(s);
	return (2);
}
