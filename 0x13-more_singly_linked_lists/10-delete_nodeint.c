#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at the index of a linked list
 * @head: double pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *link;
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
