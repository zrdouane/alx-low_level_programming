#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *@head : double pointer to list.
 *@str: string to add in node.
 *
 *Return: adress of element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lenght;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

