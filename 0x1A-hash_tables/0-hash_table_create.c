#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: Value 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
