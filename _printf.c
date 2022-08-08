#include "main.h"

/**
 * _printf - function that produces output
 * according to a format
 * @format: A pointer to the array
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter_var = 0;
	va_list arg;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			counter_var += specifier_check(format[i + 1], arg);
			i += 2;
		}
		else
		{
		_putchar(format[i]);
		counter_var += 1;

		i++;
		}
	}
	va_end(arg);
	return (counter_var);
}

/**
 * specifier_check - function to find out the format specifier
 * @c: a char which is the specifier
 * @arg: a va_list variable
 *
 * Return: an integer
 */
int specifier_check(char c, va_list arg) 
{
	int i = 0;
	int count = 0;

	spec_t specifiers[] = {
		{'c', print_c},
		{'\0', NULL}
	};

	while (specifiers[i].c != '\0')
	{
		if (c == specifiers[i].c)
		{
			count += specifiers[i].f(arg);
			break;
		}
		i++;
	}
	return (count);
}

