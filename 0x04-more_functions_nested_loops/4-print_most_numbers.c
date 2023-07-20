#include "main.h"
/**
 *print_most_numbers - print most numbers
 *dont print 2 and 4
*/
void print_most_numbers(void)
{
	int no;

	for (no = 0; no <= 9; no++)
	{
		if (no == 2 && no == 4)
			continue;
		else
			_putchar(no + 48);
	}
	_putchar('\n');
}
