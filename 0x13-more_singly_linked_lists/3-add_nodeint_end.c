#include "lists.h"

/**
 * add_nodeint_end - a function that adds
 * a new node at the end of a listint_t list.
 * @head: pointer to head
 * @n: integer to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (cursor == NULL)
		*head = new;
	else
	{
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = new;
	}

	return (new);
}
