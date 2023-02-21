#include "main.h"

/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: string
*/
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
