#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
