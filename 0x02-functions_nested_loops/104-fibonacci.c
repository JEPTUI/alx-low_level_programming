#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1, num2, sum;
	int counter;

	num1 = 1;
	num2 = 2;
	sum = 0;

	for (counter = 1; counter < 97; counter++)
	{
		sum = num1 + num2;
		if (num1 != 98)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
		num1 = num2;
		num2 = sum;
	}
	return (0);
}
