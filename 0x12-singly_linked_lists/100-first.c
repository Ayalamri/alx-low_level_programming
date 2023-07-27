#include <stdio.h>

/**
 * pre_main_message - Prints the pre-main message.
 */
void __attribute__((constructor)) pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}

int main(void)
{
	return (0);
}
