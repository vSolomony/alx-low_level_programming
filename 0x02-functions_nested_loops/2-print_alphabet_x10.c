#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *Return: Alawys 0 (Sucess)
*/
void print_alphabet_x10(void)
{
	int row;
	int bo;

	for (row = 1; row <= 10; row++)
	{
	for (bo = 'a'; bo <= 'z'; bo++)
		_putchar(bo);
		_putchar('\n');
	}
}

