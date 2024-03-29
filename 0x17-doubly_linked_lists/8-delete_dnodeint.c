#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: head of dll
 * @index:  index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || i < index)
		return (-1);

	temp->prev->next = temp->next;

	free(temp);
	return (1);
}
