#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked  list
 * @head: first node in the list
 * @index: index of  node to be returned
 *
 * Return: pointer to the node, or NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
