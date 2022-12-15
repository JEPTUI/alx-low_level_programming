#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, fbn, sum;

	num1 = 1;
	num2 = 2;
	sum = fbn = 0;

	while (fbn <= 4000000)
	{
		fbn = num1 + num2;
		num1 = num2;
		num2 = fbn;
		if ((num1 % 2) == 0)
		{
			sum = num1;
		}
	}
		printf("%ld\n", sum);
		return (0);
}
