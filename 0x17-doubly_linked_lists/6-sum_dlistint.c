#include "lists.h"

/**
 * sum_dlistint - sum up all the data (n) of a dlistint_t linked list.
 * @head: head of the dll
 *
 * Return: Sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
