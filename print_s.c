#include "main.h"

/**
 * print_s - prints out a string
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_s(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}

