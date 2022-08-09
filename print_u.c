#include "main.h"

/**
 * print_u - prints out an unsigned decimal int
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_u(va_list arg)
{
	unsigned int u = va_arg(arg, unsigned int);
	unsigned int n = u;
	int i = 0, j, count = 0;

	while (n)
	{
		n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		j = (u / _pow(10, i)) % 10;
		_putchar(('0' + j));
		count++;
		i--;
	}
	return (count);
}

