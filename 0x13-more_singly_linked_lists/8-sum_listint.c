#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: linked list node
 *
 * Return: the sum of all the data || if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
