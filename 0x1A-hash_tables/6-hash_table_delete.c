#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
			while (node)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				node->key = NULL;
				node->value = NULL;
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
