#include "lists.h"

/**
 * listint_len  -  Return The number of elements
 * of a listint_t list.
 * @h: head of the list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
