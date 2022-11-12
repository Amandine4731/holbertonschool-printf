#include "main.h"
/**
 * _abs - to check negatives
 * @p: the pointer
 */
void _abs(int *p)
{
	if (*p < 0)
	{
		*p = (*p * (-1));
	}
}
/**
  * take_all_the_number - to recup all characters of the number
  * @s: a pointer 
  * @pi: a pointer (to the number of the argument)
  * Return: 1
  */
int take_all_the_number(int *pi, char *s)
{
	int lastdigit = 0;
	int i;

	for (i = 0; *pi > 0; i++)
	{
		lastdigit = *pi % 10;
		s[i] = lastdigit + '0';
		*pi /= 10;
	}
	return (i);
}
/**
  * print_number_in_order - to print the number in order
  * @s: a pointer
  * @i: to count
  * @neg: negatives numbers
  */
void print_number_in_order(int i, int neg, char *s)
{
	if (neg == 1)
		putchar ('-');
	for (; i >= 0; i--)
	{
		putchar(s[i]);
	}
}

/**
  * _INT_MIN - print the int min
  * Return: 0
  */
void _INT_MIN(void)
{
	putchar('-');
	putchar('2');
	putchar('1');
	putchar('4');
	putchar('7');
	putchar('4');
	putchar('8');
	putchar('3');
	putchar('6');
	putchar('4');
	putchar('8');
}
/**
  * var_i - print an integer
  * @mylist: the list of arguments
  * Return: depend
  */
int var_i(va_list mylist)
{
	int number;
	int i;
	int neg = 0;
	int *pi;
	char *s;

	pi = &number;
	number = va_arg(mylist, int);
	s = malloc(sizeof(char) * 10);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	if (number < 0)
	{
		neg = 1;
	}
	if (number == INT_MIN)
	{
		_INT_MIN();
		free(s);
		return (11);
	}
	if (number == 0)
	{
		putchar('0');
		return (1);
	}
	_abs(pi);
	i = take_all_the_number(pi, s);
	print_number_in_order(i - 1, neg, s);
	free(s);
	if (neg == 1)
	{
		i = (i + 1);
	}
		return (i);
}
