#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Pointer to a linked list
 * @str: String of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *next_node;

	if (str == NULL)
		return (NULL);
	while(str[count])
		count++;

	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
		return (NULL);

	next_node->str = strdup(str);
	if (next_node->str == NULL)
	{
		free(next_node);
		return (NULL);
	}
	next_node->len = count;
	next_node->next = NULL;

	if (*head == NULL)
	{
		*head = next_node;
		return (next_node);
	}

	while (*head->next != NULL)
		*head = *head->next;
	*head->next = next_node;

	return (next_node);
}
