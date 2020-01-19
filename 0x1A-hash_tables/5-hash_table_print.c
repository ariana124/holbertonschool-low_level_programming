#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: hash table or NULL if hash table is empty
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, flag, size;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		return;

	size = (int)ht->size;

	printf("{");

	flag = 0;

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
