#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

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
	newnode->next = *head;
	*head = newnode;

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
