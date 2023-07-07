#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}

