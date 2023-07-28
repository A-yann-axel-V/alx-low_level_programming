#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->str)
			free(head->str);
		free_list(head->next);
		free(head);
	}
}
