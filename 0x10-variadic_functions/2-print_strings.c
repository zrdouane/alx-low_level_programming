#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator is string to be printed between the strings.
 * @n: num of strings.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;
	char *string;

	va_start(list, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
