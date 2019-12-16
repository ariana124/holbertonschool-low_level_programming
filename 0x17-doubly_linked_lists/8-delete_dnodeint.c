#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at a given index
 * @head: double pointer to head node
 * @index: the index of the node that should be deleted, index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *link;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	temp = *head;

	for (i = 0; temp != NULL; i++)
	{
		if (i == index - 1)
		{
			if (temp->next == NULL)
				return (-1);
			link = temp->next->next;
			free(temp->next);
			temp->next = link;
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
