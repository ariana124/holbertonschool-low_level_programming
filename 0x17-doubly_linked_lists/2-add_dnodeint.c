#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: double pointer to head node
 * @n: node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;

	return (*head);
}
