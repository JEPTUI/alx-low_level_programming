#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 * Return: On success 1, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *tmp, *temp = *head;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);
		temp = temp->next;
	}

	tmp = temp->next;
	temp->next = tmp->next;
	free(tmp);
	return (1);
}
