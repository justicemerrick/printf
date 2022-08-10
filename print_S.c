#include "main.h"

/**
 * print_S - prints a string, print \x followed by ASCII code value in hexadecimal 
 * @arg: a va_list variable
 *
 * Return: an integer
 */

int print_S(va_list arg)
{
	char *str = va_arg(arg, char *);
	int i = 0, k = 0, count = 0, nd = 0;
	char *p;

	while (*(str + i))
	{
		if ((*(str + i) > 0 && *(str + i) < 32) || *(str + i) >= 127)
		{
			p = convert_numberupper(*(str + i), 16);
			_putchar('\\');
			_putchar('x');
			count += 2;
			while (*(p + k))
			{
				nd++;
				k++;
			}
			if(nd < 2)
			{
				_putchar('0');
				count++;
			}
			for(k = 0; k < 2; k++)
			{
				_putchar(*(p + k));
				count++;
			}
		}
		else
		{
			_putchar(*(str + i));
			count++;
		}
		i++;
	}
	return (count);
}

