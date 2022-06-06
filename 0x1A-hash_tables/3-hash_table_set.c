#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht:  pointer
 * @key: pointer
 * @value: is the value associated with the key
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, x;
	hash_node_t *n_node;
	char *cop;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	cop = strdup(value);
	if (cop == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (x = i; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = cop;
			return (1);
		}
	}

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
	{
		free(cop);
		return (0);
	}
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	}
	n_node->value = cop;
	n_node->next = ht->array[i];
	ht->array[i] = n_node;

	return (1);
}
