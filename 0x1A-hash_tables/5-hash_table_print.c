#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht:  pointer
 * Return: Value 0
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n_tmp;
	unsigned long int i;
	char *carac;

	if (ht == NULL)
		return;
	printf("{");
	carac = "";

	for (i = 0; i < ht->size; i++)
	{
		n_tmp = ht->array[i];
		while (n_tmp != NULL)
		{
			printf("%s'%s': '%s'", carac, n_tmp->key, n_tmp->value);
			carac = ", ";
			n_tmp = n_tmp->next;
		}

	}
	printf("}\n");
}
