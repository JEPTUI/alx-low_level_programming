#include <stdio.h>
/**
 * main -prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	long int num1;
	long int num2;
	long int fibn;
	int counter;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (counter = 1; counter < 49; counter++)
	{
		fibn = num1 + num2;
		printf(", %ld", fibn);
		num1 += num2;
		num2 += num1;
		fibn = num2;
	}
	printf("\n");

	return (0);
}
