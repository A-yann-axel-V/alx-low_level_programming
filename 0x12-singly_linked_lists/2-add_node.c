#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer to a linked list
 * @str: String of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = count;
	new->str = strdup(str);
	new->next = *head;

	return (new);
}
