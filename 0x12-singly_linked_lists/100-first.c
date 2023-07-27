#include <stdio.h>

/* Function prototype for the constructor attribute */
void print_message(void) __attribute__((constructor));

/**
 * print_message - Function that prints a message before main is executed.
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
