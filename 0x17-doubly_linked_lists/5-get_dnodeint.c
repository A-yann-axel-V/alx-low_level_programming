#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the linked list
 * @index: the nth node of a dlistint_t linked list
 *
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = 0;

	while (head && len < index)
	{
		head = head->next;
		len++;
	}

	if (len < index)
		return (NULL);

	return (head);
}
