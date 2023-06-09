#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * @h: pointer to the linked lists
 * Return: ellements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
			h = h->next;
	}
	return (i);
}
