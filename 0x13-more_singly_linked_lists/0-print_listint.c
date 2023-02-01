#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to a linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
