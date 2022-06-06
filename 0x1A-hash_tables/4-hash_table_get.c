#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  pointer
 * @key:  pointer
 * Return: Value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n_tmp;
	unsigned int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	{
		i = key_index((const unsigned char *)key, ht->size);
		n_tmp = ht->array[i];

		while (ht->array[i])
		{
			if (n_tmp)
			{
				if (strcmp(n_tmp->key, (char *)key) == 0)
					return (n_tmp->value);
				n_tmp = n_tmp->next;
			}
		}
	}
	return (NULL);
}
