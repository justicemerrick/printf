#include "main.h"

/**
 * print_b - function to print an unsigned integer in binary format
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_b(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *numchar;
	int i = 0;

	numchar = convert_number(num, 2);

	while (numchar[i])
	{
		_putchar(numchar[i]);
		i++;
	}
	free(numchar);
	return (i);
}

