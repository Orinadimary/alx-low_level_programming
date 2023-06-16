#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a dlistint_t list.
 * @h: the pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->);
		h = h->next;
		n++;
	}
	return (n);
}
