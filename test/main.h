#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
	char c;
	int (*f)(va_list);
}spec_t;
int specifier_check(char, va_list arg);
int print_c(va_list arg);
int print_s(va_list arg);
int print_d(va_list);
int print_b(va_list);
char *convert_number(int64_t num, int base);
int _pow(int, int);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
