#include "main.h"

char *convert_numberupper(int64_t num, int base)
{
	char *output = malloc(65);
	int i = 0, rem,j = 0;
	int buffer[65];

	if (num < 0)
	{
		output[i] = '-';
		num *= -1;
		i++;
		j++;
	}
	if (num == 0)
	{
		output[i] = '0';
		output[i + 1] = '\0';
		return (output);
	}
	while (num)
	{
		rem = num % base;
		if (rem >= 10)
			buffer[i] = 'A' + (rem - 10);
		else
			buffer[i] = '0' + rem;
		num /= base;
		i++;
	}
	while (i != 0)
	{
		output[j] = buffer[i - 1];
		i--;
		j++;
	}
	output[j] = '\0';
	return (output);
}
