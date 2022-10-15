#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size:  the new size, in bytes of the new memory block
 *
 * Return: pointer to the newly reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		char *dest, *src;
		unsigned int i;

		if (new_size == old_size)
			return (ptr);

		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			if (ptr == NULL)
			{
				return (NULL);
			}
			return (ptr);
		}
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		dest = malloc(new_size);
		if (dest == NULL)
			return (NULL);

		src = ptr;

		for (i = 0; i < new_size && i < old_size; i++)
			dest[i] = src[i];
		free(ptr);

		return (dest);
}
