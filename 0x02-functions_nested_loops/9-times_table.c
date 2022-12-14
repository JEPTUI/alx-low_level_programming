#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num1;
	int num2;
	int prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (num2 = 1; num2 <= 9; num2++)
		{
			prod = (num1 * num2);

			if ((prod / 10) > 0)
			{
				_putchar('0' + (prod / 10));
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + (prod % 10));

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
