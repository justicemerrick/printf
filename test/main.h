#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specifier
{
	char c;
	int (*f)(va_list);
}spec_t;
int specifier_check(char, va_list);
int print_c(va_list);
int print_s(va_list);
int print_d(va_list);
int print_b(va_list);
int print_u(va_list);
int print_x(va_list);
int print_X(va_list);
int print_S(va_list);
int print_p(va_list);
int print_o(va_list);
char *convert_number(int64_t num, int base);
char *convert_numberupper(int64_t num, int base);
int _pow(int, int);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
