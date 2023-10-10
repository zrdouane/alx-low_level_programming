#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: ndex of value or -1 if not found..
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 1, high = 2;

	if (!array || !size)
		return (-1);
	if (size < 2)
	{
		low = 0;
		high = 1;
	}
	else
	{
		while (low < size)
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			if (
				((array[low] <= value) && (array[high] >= value)) || ((low * 2) >= size))
				break;
			low *= 2;
			high = high * 2 < size ? high * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_index(array, low, high, value));
}

/**
 * binary_search_index - Searches a value in a sorted arr use binary search.
 * @array: The array to search in.
 * @left: The left index of the array.
 * @right: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, left, right);
	m = left + ((right - left) / 2);
	if (left == right)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (binary_search_index(array, left, m - 1, value));
	}
	else if (value == *(array + m))
	{
		return ((int)m);
	}
	else
	{
		return (binary_search_index(array, m + 1, right, value));
	}
}

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @left: The left index of the array.
 * @right: The right index of the array.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = left; i < left + (right - left + 1); i++)
			printf("%d%s", *(array + i), i < left + (right - left) ? ", " : "\n");
	}
}
