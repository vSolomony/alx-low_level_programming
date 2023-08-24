#include "lists.h"

void first_word(void) __attribute__ ((constructor));
/**
 * first_word - launches before main
 * Return: void
*/
void first_word(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
