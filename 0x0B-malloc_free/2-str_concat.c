#include "main.h"
/**
* str_concat - a function that concatenates two strings.
*@s1:First str
*@s2:Second str
*
*Return: NULL in case of failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int i;
	int concat_i = 0;
	int lenght = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		lenght++;

	concat_string = malloc(sizeof(char) * lenght);

	if (concat_string == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_string[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_string[concat_i++] = s2[i];

	return (concat_string);
}
