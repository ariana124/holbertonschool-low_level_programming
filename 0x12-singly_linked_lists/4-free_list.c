#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: pointer to start
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
