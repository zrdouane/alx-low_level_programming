#include "search_algos.h"
/**
 * advanced_binary - function that searches for
 * a value in a sorted array of integers.
 * @array : pointer to the first element of the array to search in.
 * @size : the number of elements in array.
 * @value : the value to search for.
 * Return: index of value or -1 if not found.
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_index(array, 0, size - 1, value));
}
