#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: pointer to the link
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *copy, *temp = *head;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp; i++)
	{
		if (i == (index - 1))
		{
			copy = temp->next;
			temp->next = copy->next;
			free(copy);
		}
		temp = temp->next;
	}
	if (i < index)
	{
		return (-1);
	}
	return (1);
}
