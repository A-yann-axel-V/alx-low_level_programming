#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		n++;
		h->next;
	}

	return (n);
}