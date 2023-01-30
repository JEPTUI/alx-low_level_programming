#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: linked list
 * @str: string for new node
 * Return: Address of the new element
 *	Or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i, count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = i;
	new->str = strdup(str);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new;

	return (new);
}
