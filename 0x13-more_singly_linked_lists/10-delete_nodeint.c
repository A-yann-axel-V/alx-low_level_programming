#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: Pointer to a linked list node
 * @index: the index of the node that should be deleted
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *next = NULL;
	unsigned int k = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index != 0)
	{
		cur = *head;
		while (k < index - 1)
		{
			if (cur->next == NULL)
				return (-1);
			cur = cur->next;
			index++;
		}
		next = cur->next;
		cur->next = next->next;
		free(next);
		return (1);
	}
	cur = (*head)->next;
	free(*head);
	*head = cur;
	return (1);
}
