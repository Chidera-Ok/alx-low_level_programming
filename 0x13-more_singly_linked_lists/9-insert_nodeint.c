#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 * @head: pointer to list
 * @idx: index
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	if (temp == NULL || temp->next == NULL)
		return (NULL);
	for (i = 0; temp; i++)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
		}
		temp = temp->next;
	}
	return (new);
}
