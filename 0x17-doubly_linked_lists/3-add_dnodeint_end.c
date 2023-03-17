#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of a linked list
 * @n: integer for the new node to contain
 *
 * Return: On Success - address of the new element
 *	On failure - NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	new->prev = tail;

	return (new);
}
