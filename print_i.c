#include "main.h"
/**
 * print_i - prints a number and send it to this function
 * @arg: a va_list tyoe variable.
 *
 * Return: number of arguments to be printed in integer form
 */
int print_i(va_list arg)
{
	int i;
	int num;
	int count;
	unsigned int n;

	i = va_arg(arg, int);
	num = 1;
	count = 0;

	if (i < 0)
	{
		count += _putchar('-');
		n = i * -1;
	}
	else
		n = i;
	for (; n / num > 9; )
		num *= 10;

	for (; num != 0; )
	{
		count += _putchar('0' + n / num);
		n %= num;
		num /= 10;
	}
	return (count);
}
/**
 * print_unsigned_number - Prints an unsigned number
 * @i: unsigned integer to be printed
 *
 * Return: The total of numbers printed
 */
int print_unsigned_number(unsigned int i)
{
	int num;
	int total;
	unsigned int n;

	num = 1;
	total = 0;

	n = i;

	for (; n / num > 9; )
		num *= 10;

	for (; num != 0; )
	{
		total += _putchar('0' + n / num);
		n %= num;
		num /= 10;
	}
	return (total);
}
