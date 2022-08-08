#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
	char c;
	int (*f)(va_list);
}spec_t;
int specifier_check(char , va_list arg);
int print_c(va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
