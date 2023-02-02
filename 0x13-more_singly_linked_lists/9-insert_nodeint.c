#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: index of the list where the new node should be added.
 * @n: integer for new node
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	while (node < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		node++;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
