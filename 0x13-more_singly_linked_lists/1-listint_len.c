#include "lists.h"

/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer to list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nelem = 0;

	while (h)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
