#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the linked list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = _strlen(str);
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


/**
 * _strlen - gives length of a string
 * @s: string
 * Return: returns length of string
 */
int _strlen(const char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
