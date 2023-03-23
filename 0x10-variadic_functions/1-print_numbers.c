#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed btw numbers.
 * @n: number of integers passed to the function.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;

	va_start(list, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(list, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
