#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a linked list node
 * @idx: the index of the list where the new node should be added
 * Index starts at 0
 * @n: Value of the node
 *
 * Return: the address of the new node, or NULL if it failed
 * If it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,
		int n)
{
	unsigned int k = 0;
	listint_t *curr_node = *head, *new_node;

	if (n != 0)
	{
		while (k < idx)
		{
			curr_node = curr_node->next;
			if (curr_node == NULL)
				return (NULL);
			k++;
		}
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (n == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = curr_node->next;
	curr_node->next = new_node;
	return (new_node);
}
