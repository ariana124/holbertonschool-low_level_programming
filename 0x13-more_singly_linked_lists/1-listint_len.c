#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: pointer to the head
 * Return: the number of elements in the linked list listint_t
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
