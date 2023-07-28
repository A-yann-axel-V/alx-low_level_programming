#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - Singly linked list
 * @strng: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list 
 * node structure
 */
typedef struct list_s
{
	char *strng;
	unsigned int length;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
