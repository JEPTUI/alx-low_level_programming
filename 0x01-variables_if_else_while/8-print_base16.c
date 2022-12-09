#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int a_to_f;

	for (n = '0'; n <= '9'; n++)

		putchar(n);

	for (a_to_f = 'a'; a_to_f <= 'f'; a_to_f++)

		putchar(a_to_f);

	putchar('\n');

	return (0);
}
