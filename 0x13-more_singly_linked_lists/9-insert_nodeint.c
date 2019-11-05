#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head
 * @idx: index of where the new node should be added
 * @n: data for new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		for (i = 0; prev != NULL; i++)
		{
			if (i == idx - 1)
			{
				new->next = prev->next;
				prev->next = new;
			}
			prev = prev->next;
		}
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
