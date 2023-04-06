#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node)
			{
				printf("%s'%s': '%s'", comma, node->key, node->value);
				comma = ", ";
				node = node->next;
			}
		}
	}
	printf("}\n");
}
