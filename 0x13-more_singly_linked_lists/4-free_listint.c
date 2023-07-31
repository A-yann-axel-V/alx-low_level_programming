#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}
