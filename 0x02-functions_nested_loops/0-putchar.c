#include "main.h"

/**
 * main - program that prints 1 char and loop to complete string that user entre,
 * followed by a new line
 * Return: Always 1
 */
void	ft_putchar(char c)
{
	write(0, &c, 1);
}
/**
 * main - program that prints string,
 * followed by a new line
 * Return: 1
 */
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/**
 * main - program that prints _putchar,
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	ft_putstr("_putchar\n");
}
