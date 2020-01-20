#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *temp;
	int size, i;

	size = (int) ht->size;

	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			temp = head;

			while (temp != NULL)
			{
				free(temp->key);
				free(temp->value);
				head = head->next;
				free(temp);
				temp = head;
			}
		}
	}

	free(ht->array);
	free(ht);
}
