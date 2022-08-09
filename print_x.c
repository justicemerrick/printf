#include "main.h"

/**
 * print_x - function to print an unsigned hexadecimal
 * @arg: a va_list variable
 * @buffer: pointer to a char
 *
 * Return: an integer
 */

int print_x(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);
	char *str;
	int i = 0, count = 0;

	str = convert_number(x, 16);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}
