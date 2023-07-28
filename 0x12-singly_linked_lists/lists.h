#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

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
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

char _putchar(char c);
size_t print_list(const list_t *h);

#endif
