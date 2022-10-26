#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: ponter to head
 *
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
