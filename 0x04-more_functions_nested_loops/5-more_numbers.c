#include "main.h"
/**
 *more_numbers - a function that prints numbers from 0 to 14,
 *followed by a new line
 *
 *Return: The returned value will be 0.
 */

void more_numbers(void)
{
	int i, a;

	i = 0;
	a = 0;
	while (a < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10 && i < 15)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		a++;
	}
}
