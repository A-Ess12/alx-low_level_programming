#include <stdio.h>
#include "lists.h"

/*
 * print-list:It prints elements of linked-list
 * It returns the no of node printed
 */
size_t print_list(const list_z *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
