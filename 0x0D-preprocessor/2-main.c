#include <stdio.h>

/**
*main - a program that prints the name of the file it
*was compiled from, followed by a new line.
*Return:name of the file it was compiled from dir
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
