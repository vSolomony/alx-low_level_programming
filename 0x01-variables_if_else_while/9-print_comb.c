#include <stdio.h>
/**
 * main - Entry level
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (sucess)
*/
int main(void)
{
	int cd;

	for (cd = 0 ; cd <= 9 ; cd++)
	{
		putchar(' ');
		putchar(',');
		putchar(cd);
	}
	putchar('\n');
	return (0);
}
