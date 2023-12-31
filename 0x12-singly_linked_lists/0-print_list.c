#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all element of lists-t list
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t leng;

	leng = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		leng++;
	}
	return (leng);
}
