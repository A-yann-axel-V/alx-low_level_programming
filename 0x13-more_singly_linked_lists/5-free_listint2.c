#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL
 * @head: linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *to_free, *node = *head;

	if (head == NULL)
		return;

	while (node != NULL)
	{
		to_free = node->next;
		free(node);
		node = to_free;
	}
}
