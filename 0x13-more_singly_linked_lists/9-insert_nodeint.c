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
	listint_t *new, *prev = *head;
	unsigned int i;

	if (prev == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx != 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			prev = prev->next;
		}
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	new->n = n;

	new->next = prev->next;

	prev->next = new;

	return (new);
}
