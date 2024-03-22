#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the dll
 * @idx: is the index of the list where the new node should be added.
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = *h;
	size_t len = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	while (current && len < idx)
	{
		len++;
		current = current->next;
	}

	if (len < idx)
	{
		free(new_node);
		return (NULL);
	}
	else if (idx == (len - 1))
		return (add_dnodeint_end(h, n));

	current = current->prev;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
