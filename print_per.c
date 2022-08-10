#include "main.h"

/**
 * print_per - prints a percent symbol
 * @arg: arguments
 *
 * Return: An integer.
 */
int print_per(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
