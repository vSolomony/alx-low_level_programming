#include <stdio.h>
/**
 *main - entry level
 *Description: fibonatchi
 *Return: Alawys 0 (true)
*/
int main(void)
{
	unsigned long fib = 0, fib = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
