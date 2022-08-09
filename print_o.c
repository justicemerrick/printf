#include "main.h"

/**
 * print_o - prints octal
 * @arg: int to change
 *
 * Return: string with octal
 */

char *print_o(va_list arg)
{
	int j = 0, octal_count = 1;
	int i, k;
	char *s;

	k = va_arg(list, int);
	i = k;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	if (k < 0)
	{
		s[0] = 1 + '0';
		j++;
		k *= -1;
		i *= -1;
	}
	while (k > 1)
	{
		k /= 8;
		octal_count *= 8;
	}
	while (octal_count > 0)
	{
		s[j++] = (i / octal_count + '0');
		i %= octal_count;
		octal_count /= 8;
	}
	s[j] = '\0';
	return (s);
}
