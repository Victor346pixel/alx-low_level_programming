#include "lists.h"

/**
 * add_nodeint_end - a node is added the end of a linked list
 * @head: first element pointer to the linked  list
 * @n: data contained in the new element
 *
 * Return: The new node pointer, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
