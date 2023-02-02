#include "lists.h"

/**
 * 6-pop_listint.c - deletes the head of a node of a linked list
 * @head: pointer to linked list
 * Return: head node's data or 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	
	temp = *head;
	data = temp->n;

	*head = temp->next;
	free(temp);

	return (data);
}
