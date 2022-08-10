#include "main.h"

/**
 * print_d - prints a number in decimal
 * @arg: a va_list type variable
 *
 * Return: an integer
 */

int print_d(va_list arg)
{
	int d = va_arg(arg, int);
	int num = d, i = 0, count, j;
	unsigned int n, n1;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
		n1 = -num;
	}
	else
	{
		n = num;
		n1 = num;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		j = (n1 / _pow(10, i)) % 10;
		_putchar('0' + j);
		count++;
		i--;
	}
	return (count);
}

/**
 * _pow - raises a number to a power
 * @value: value to raise to power
 * @power: power to raise value to
 *
 * Return: nothing
 */
int _pow(int value, int power)
{
	int result = 1;
	int i = 0;

	while (i < power)
	{
		result *= value;
		i++;
	}
	return (result);
}



