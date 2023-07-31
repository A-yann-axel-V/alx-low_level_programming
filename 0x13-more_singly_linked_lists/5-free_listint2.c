#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set the head to NULL
 * @head: linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *to_free;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		to_free = (*head)->next;
		free(*head);
		*head = to_free;
	}
}
