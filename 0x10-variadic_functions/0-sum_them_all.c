#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: first param
 * Return: 0 if n is null return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int index;

	va_start(list, n);

	if (n != 0)
	{
		for (index = 0; index < n; index++)
			sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
