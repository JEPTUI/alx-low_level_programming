#include <stdio.h>
/**
 * main -prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	int fibn;
	int counter;

	printf("%ld, %ld", num1, num2);

	for (counter = 0; counter < 48; counter++)
	{
		fibn = num1 + num2;
		printf(", %ld", fibn);
		num1 += num2;
		num2 += fibn
	}
	printf("\n");

	return (0);
}
