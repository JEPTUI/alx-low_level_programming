#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: double pointer to a linked list
 * @n: value
 * Return: address of the new element
 *	Or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}

