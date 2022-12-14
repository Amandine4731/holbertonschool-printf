#include "main.h"
/**
 * get_functions_printf - to select the good variable function
 * @mylist: a list of arguments
 * @b: types of variable
 * Return: 2
 */
int get_functions_printf(va_list mylist, char b)
{
	int i;
	var_t vars[] = {
		{'c', var_c},
		{'s', var_s},
		{'d', var_i},
		{'i', var_i}
	};
	i = 0;

	while (vars[i].var)
	{
		if (vars[i].var == b)
		{
			return (vars[i].f(mylist));
		}
		i++;
	}
	putchar('%');
	putchar(b);
	return (2);
}
