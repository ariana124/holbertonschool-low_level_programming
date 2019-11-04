#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of list
 * @head: double pointer to head
 * @n: constant integer
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = newnode;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
