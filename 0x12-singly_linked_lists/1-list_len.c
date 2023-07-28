#include "lists.h"

/**
 * list_len - count the number of elements
 * in a linked list_t list
 * @h: a linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
