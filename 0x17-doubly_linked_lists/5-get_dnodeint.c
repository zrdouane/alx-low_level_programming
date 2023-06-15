#include "lists.h"

/**
 * get_dnodeint_at_index - function returns nth node of a dlistint_t list.
 * @index: the index of the node.
 * @head: head of linked list.
 *
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;

	while (current_node && index)
	{
		index--;
		current_node = current_node->next;
	}
	return (current_node);
}
