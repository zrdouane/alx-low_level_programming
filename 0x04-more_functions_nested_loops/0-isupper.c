#include "main.h"
/**
 * _isupper - check if char is upper.
 *@c : input
 * Return: Always 0.
 */
int	_isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
