#include "lists.h"
/**
 * list_len - return the number of elemnts in linked list.
 * @h: pointer to linked list.
 *
 * Return: number of element.
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
