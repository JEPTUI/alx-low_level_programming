#include "lists.h"

/**
 * looped_listint_len - counts the number of unique nodes
 *		in a looped linked list
 * @head: pointer to the head of the linked list
 * Return: number of uniques node
 *	Or 0 if list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *hare;
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
 * print_listint_safe - prints a linked list
 * @head: pointer to a linked list
 * Return: On sucess - number of nodes in the list
 *	exit the program with status 98 if function fails
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
