#include <stdio.h>
/**
 * main - print 1 to 100
 * multiples of 3 Fizz
 * multiples of 5 Buzz
 * multiples of 3 & 5 FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		
		printf(" ");
	}
	printf("\n");

	return (0);
}
