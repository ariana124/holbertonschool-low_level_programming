#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		free(temp->next);
		free(temp);
		temp = temp->next;
	}
}
