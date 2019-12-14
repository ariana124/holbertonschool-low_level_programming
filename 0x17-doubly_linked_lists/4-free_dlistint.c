#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to start of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		free (temp);
		temp = temp->next;
	}
}
