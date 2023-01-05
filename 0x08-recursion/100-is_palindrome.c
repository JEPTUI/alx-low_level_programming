#include "main.h"
int _strlen(char *s);
int check_palindrome(char *s, int i, int len);
/**
 * _strlen - gets length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - checks palindrome
 * @s: string to check
 * @i: index of the string to be checked
 * @len: length of string
 *
 * Return: 1 if string is palindrome, 0 if not.
 */
int check_palindrome(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}
/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 1 if string is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
