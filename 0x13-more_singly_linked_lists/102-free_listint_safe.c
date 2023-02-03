#include "lists.h"

/**
 * looped_listint_count - counts the number of unique nodes
 *		in a looped listint_t list
 * @head: pointer to the head of the linked list
 * Return: Address of the node where loop starts
 *	Or NULL if there is no loop
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *turtle, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				nodes++;
				turtle = turtle->next;
				hare = hare->next;
			}

			turtle = turtle->next;
			while (turtle != hare)
			{
				nodes++;
				turtle = turtle->next;
			}

			return (nodes);
		}

		turtle = turtle->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the linked list
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
