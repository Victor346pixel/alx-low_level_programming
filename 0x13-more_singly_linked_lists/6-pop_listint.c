#include "lists.h"

/**
 * pop_listint - head  node of a linked list is deleted
 * @head: first element pointer
 *
 * Return: Data inside elements that were deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
