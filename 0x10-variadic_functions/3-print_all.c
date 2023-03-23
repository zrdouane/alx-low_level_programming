#include "variadic_functions.h"
/**
 *_putchar - print a charcter
 *@arg: argmcount
 */
void _putchar(va_list arg)
{
	char string;
		string = va_arg(arg, int);
	printf("%c", string);
}
/**
 * _int - print number
 * @arg: argcount
 */
void _int(va_list arg)
{
	int number;
		number = va_arg(arg, int);
	printf("%d", number);
}
/**
 *_float - print float
 *@arg: argcount
 */
void _float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}
/**
 *_string - print string
 *@arg: argcount
 */
void _string(va_list arg)
{
	char *string;
		string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 *print_all -  function that prints anything.
 * @format : format of input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	printer_t function[] = {
		{"c", _putchar},
		{"i", _int},
		{"f", _float},
		{"s", _string}};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(function[j].sym)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			function[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
