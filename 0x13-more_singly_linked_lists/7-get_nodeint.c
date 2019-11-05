#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head
 * @index: index of the node that starts at 0
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
