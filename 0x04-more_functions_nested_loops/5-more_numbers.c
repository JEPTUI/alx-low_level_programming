#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int a;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 > 0)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
	}
	_putchar('\n');
}
