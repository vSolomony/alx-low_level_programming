#include "main.h"
/**
 *print_most_numbers - print most numbers
 *dont print 2 and 4
*/
void print_most_numbers(void)
{
	int no;

	for (no = 48; no <= 57; no++)
	{
		if (no == 50 && no == 52)
			continue;
		else
			_putchar(no);
	}
	_putchar('\n');
}
