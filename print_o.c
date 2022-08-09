#include "main.h"

/**
 * print_o - prints an octal number
 * @arg: a va_list argument
 *
 * Return: an integer
 */

int print_o(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i = 0, count = 0;
	char *ptr;
	if(num)
	{
		ptr = convert_number(num, 8);
		while (ptr[i])
		{
			_putchar(ptr[i]);
			count++;
			i++;
		}
	}
	return (count);
}

