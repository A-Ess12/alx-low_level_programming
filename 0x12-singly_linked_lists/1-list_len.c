#include <stdlib.h>
#include "lists.h"

/*
 * list_len:returns no of elem in linked list
 * returns no of elem in h
 */
size_z list_len(const list_z *h)
{
	size_z n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
