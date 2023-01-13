#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _isdigit(char *str);
int _atoi(char *str);
void _puts(char *str);
void _print_error(void);

/**
 *  _atoi - converts a given string to an integer
 * @str: string argument
 * Return: output
 */
int _atoi(char *str)
{
	int i, num = 0, sign = 1;

	if (str[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	else
	{
		i = 0;
	}
	for (; str[i] != '\0'; i++)
	{
		num = num * 10 + str[i] - '0';
	}
	return (sign * num);
}
/**
 * main - checks for arguments passed
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
		_print_error();
	return (98);

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
		_print_error();
	return (98);

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
/**
 * _isdigit - checks if a given string consists of digits only
 * @str: string to check
 * Return: Always 0.
 */
int _isdigit(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * _print_error - helper function
 */
void _print_error(void)
{
	_puts("Error");
}
/**
 * _puts - helper function
 * @str: string argument
 */
void _puts(char *str)
{
	printf("%s\n", str);
}
