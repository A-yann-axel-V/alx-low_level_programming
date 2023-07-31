#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}
