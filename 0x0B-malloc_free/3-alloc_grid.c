#include "main.h"
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int z;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (z = 0; z <= i; z++)
				free(array[z]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (z = 0; z < width; z++)
		{
			array[i][z] = 0;
		}
	}
	return (array);
}

