#include "main.h"
/**
 * get_functions_printf - to select the good variable function
 * @mylist: a list of arguments
 * @s: types of variable
 * Return: 2
 */
int get_functions_printf(va_list mylist, char s)
{
	int i;
	var_t vars[] = {
		{'c', var_c},
		{'s', var_s},
		{'d', var_i},
		{'i', var_i},
	};
	i = 0;

	while (vars[i].var)
	{
		if (vars[i].var == s)
		{
			return (vars[i].f(mylist));
		}
		i++;
	}
	putchar('%');
	putchar(s);
	return (2);
}
