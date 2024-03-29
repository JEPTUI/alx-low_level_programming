#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the first node of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head) = prev;

	return (*head);
}
