#include <stdio.h>
/**
 * main - Entry level
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (sucess)
*/
int main(void)
{	
	int lcn; 
	int lcc;
	for (lcn = 0 ; lcn <= 9 ; lcn++)
	{
		putchar(lcn + 48);
	}
	for (lcc = 0 ; lcc <= 5 ; lcc++)
	{	
		putchar(lcc + 97);
	}
	putchar('\n');
	return (0);
}
