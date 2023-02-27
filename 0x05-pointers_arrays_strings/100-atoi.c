#include "main.h"
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
	int	resultat;
	int	sign;

	resultat = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		resultat = resultat * 10 + (*s - '0');
		s++;
	}
	return (resultat * sign);
}
