#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of dlistint_t list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		++count;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
