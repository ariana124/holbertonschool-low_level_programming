#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head
 * Return: a pointer to the 1st node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = current;
	}
	(*head) = temp;
	return (*head);
}
