#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			return (-1);

		h = h->next;
		count++;
	}
	return (count);
}
