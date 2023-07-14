#include <stdio.h>
/**
 * main - Entry level
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (sucess)
*/
int main(void)
{
	char small;

	for (small = 'a' ; small <= 'z' ; small++)
	{
	putchar(small);
	}
	putchar('\n');
	return (0);
}
