#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of a linked list
 * @index: node index
 *
 * Return: On success - nth node of the list
 *	On failure - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
