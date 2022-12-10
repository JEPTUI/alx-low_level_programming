#include <stdio.h>
/**
 * main - print all possible combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;
	int num1;
	int num2;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (num1 = tens; num1 <= '9'; num1++)
			{
				for (num2 = ones + 1; num2 <= '9'; num2++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(num1);
					putchar(num2);

					if (!((tens == '9' && ones == '8') && (num1 == '9' && num2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
