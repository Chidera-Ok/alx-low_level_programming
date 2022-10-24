#include "lists.h"

/**
* print_list - a function that prints all the elements of a list_t list.
* @h: soingly linkled list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nelem++;
	}
	return (nelem);
}
