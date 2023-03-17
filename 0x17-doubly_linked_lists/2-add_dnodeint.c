#include "lists.,h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the head of a linked list
 * @n: integer for the new node to contain
 *
 * Return: On Success - address of the new element
 *	On failure - NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
