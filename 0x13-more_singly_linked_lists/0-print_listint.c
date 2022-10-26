#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a listint_t list.
 * @h: pointer to the listi
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nelem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nelem++;
		h = h->next;
	}
	return (nelem);
}
