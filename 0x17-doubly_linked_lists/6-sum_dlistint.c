#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data(n) of a linked list
 * @head: pointer to the head of a linked list
 * Return: 0 if list is empty
 *	else sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
