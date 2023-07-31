#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: linked list
 *
 * Return: and returns the head node’s data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *cur;

	if (head == NULL || *head == NULL)
		return (0);

	cur = *head;
	*head = cur->next;
	n = cur->n;
	free(cur);
	return (n);
}
