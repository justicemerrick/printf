#include "main.h"

/**
 * print_p - prints out the value of a pointer as a hexadecimal
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_p(va_list arg)
{
	unsigned long int val = va_arg(arg, unsigned long int);
	char *str;
	int count = 0, i = 0;

	str = convert_number(val, 16);
	if(*(str + i))
	{
		_putchar('0');
		_putchar('x');
		count += 2;
	while (*(str + i))
	{
		_putchar(*(str + i));
		count++;
		i++;
	}
	}
	return (count);
}

