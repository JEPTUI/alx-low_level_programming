#include <stdio.h>
#include "main.h"
/**
 * main - print name of the program
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
