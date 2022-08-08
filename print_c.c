#include "main.h"

/**
 * print_c - function to print a char
 * @c: char to print
 *
 * Return: an integer
 */

int print_c(va_list arg)
{
	char ch = va_arg(arg, int);

	_putchar(ch);
	return (1);
}

