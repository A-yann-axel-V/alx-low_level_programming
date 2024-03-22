#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: head of the dlinked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (headi != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
