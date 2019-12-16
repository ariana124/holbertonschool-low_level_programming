#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list
 * @head: pointer to head node
 * @index: the index of the node, starting from 0
 * Return: the nth node of a linked list or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	if (temp == NULL) /* checks if the head is empty */
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL) /* checks every time the pointer moves */
			return (NULL);
	}

	return (temp);
}
