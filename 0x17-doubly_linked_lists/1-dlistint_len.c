#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -  function that returns the number of elements
 * @h: pointer to the linked lists
 * Return: ellements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
			h = h->next;
	}
	return (i);
}
