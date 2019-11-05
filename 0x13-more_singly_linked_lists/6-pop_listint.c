#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (temp == NULL || *head == NULL)
		return (0);

	(*head) = temp->next; /* changes head */
	data = (*head)->n;
	free(temp); /* frees old head */

	return (data);
}
