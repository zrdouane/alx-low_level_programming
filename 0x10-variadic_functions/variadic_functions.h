#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
/**
 *struct printer - printe
 *@sym : smbole
 *@print : print
 */
typedef struct printer
{
	char *sym;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void _putchar(va_list arg);
void _int(va_list arg);
void _float(va_list arg);
void _string(va_list arg);
void print_all(const char * const format, ...);
#endif
