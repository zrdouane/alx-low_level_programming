#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the linkedlist.
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
