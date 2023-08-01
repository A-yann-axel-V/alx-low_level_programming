#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node of a listint_t linked list
 * @head: linked list node
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node || if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	while (n < index && head->next != NULL)
	{
		head = head->next;
		n++;
	}
	if (n == index && head->next == NULL)
		return (NULL);
	node->n = head->n;
	node->next = NULL;

	return (node);
}
