#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success, 1 if 2 arguments are not given
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
