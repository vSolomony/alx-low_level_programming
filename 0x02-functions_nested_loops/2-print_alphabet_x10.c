#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *Return: Alawys 0 (Sucess)
*/
void print_alphabet_x10(void)
{
	int row;
	int body;

	for (row = 1 ; row <= 10 ; row++)
	{
	for (body = 'a' ; body <= 'z' ; body++)
		_putchar(body);
		_putchar('\n');
	}
}

