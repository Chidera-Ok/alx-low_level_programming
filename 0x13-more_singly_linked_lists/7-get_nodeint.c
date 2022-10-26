#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to list
 * @index: index of node
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; temp->next; i++)
	{
		if (i == index)
			break;
		temp = temp->next;
	}
	if (i < index)
		return (NULL);
	return (temp);
}
