#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
