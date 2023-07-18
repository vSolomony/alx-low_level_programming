#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase
 * Return: Alawys 0 (sucess)
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
