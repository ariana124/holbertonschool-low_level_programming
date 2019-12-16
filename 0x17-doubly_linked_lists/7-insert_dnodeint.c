#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: double pointer to head
 * @idx: index of list where the new node should be added, index starts at 0
 * @n: data for the new node
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			new->next = NULL;
			*h = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	if (idx != 0)
	{
		for (i = 0; current != NULL; i++)
		{
			if (i == idx - 1)
			{
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
		}
		free(new);
		return (NULL);
	}
	new->next = *h;
	*h = new;
	return (new);
}
