#include <stdio.h>
/**
 * main -prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	int fibn = 50;
	int counter;

	for (counter = 1; counter <= (fibn / 2); counter++)
	{
		printf("%ld, %ld", num1, num2);
		num1 += num2;
		num2 += num1;
	}
	if (fibn % 2 == 1)
		printf(", %ld", num1);

	printf("\n");

	return (0);
}
