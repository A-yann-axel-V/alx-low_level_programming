#include "lists.h"

/**
 * msg_before_main - Function executed before main()
 */
void msg_before_main(void) __attribute__((constructor));

/**
 * msg_before_main - prints a message
 */
void msg_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
