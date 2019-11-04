#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of list
 * @head: double pointer to head
 * @n: constant integer
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
