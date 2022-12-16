#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0 on success
 */
int  main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2;

	while (div < n)
	{
		if (n % div == 0)
		{
			n = n / div;
			div = 2;
		}
		else
			div++;
	}
	printf("%lu\n", n);
	return (0);
}
