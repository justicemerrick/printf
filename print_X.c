#include "main.h"

/**
 * print_X - prints uppercase of an unsigned hexadecimal number
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_X(va_list arg)
{
	unsigned int X = va_arg(arg, unsigned int);
	int i = 0, count = 0;
	char *str;

	str = convert_numberupper(X, 16);
	while (str[i])
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}

