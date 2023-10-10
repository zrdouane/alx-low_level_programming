#include "search_algos.h"
/**
 * jump_search - Searches a value in a sorted array using a jump search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left = 0;
	size_t right = 0;

	if (!array || size == 0)
	{
		return (-1);
	}
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)right, array[right]);
		left = right;
		right += step;
		if (left >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)left, (int)right);
	right = (right >= size) ? size - 1 : right;
	for (; left <= right; left++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)left, array[left]);
		if (array[left] == value)
		{
			return ((int)left);
		}
	}
	return (-1);
}
