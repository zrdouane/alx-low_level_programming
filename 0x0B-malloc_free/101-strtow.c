#include "main.h"
/**
 * count_word - function that count the number of words in string
 * @s: string
 *
 * Return: count
 */
int count_word(char *s)
{
	int f, count, weight;

	f = 0;
	weight = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			weight++;
		}
	}

	return (weight);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat;
	char *tmp;
	int index, k = 0, lenght = 0, words, c = 0, start, end;

	while (*(str + lenght))
		lenght++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (index = 0; index <= lenght; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			if (c)
			{
				end = index;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = index;
	}

	mat[k] = NULL;

	return (mat);
}
