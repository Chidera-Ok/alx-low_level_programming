#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list
 * and sets the head to NULL.
 * @head: pointer to pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
