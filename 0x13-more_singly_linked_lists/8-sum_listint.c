#include "lists.h"

/**
 * sum_listint - calculates data in a listint_t list
 * @head: first node in list
 *
 * Return: resulting sum or if empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
