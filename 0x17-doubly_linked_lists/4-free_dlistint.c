#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *end, *next;

	end = head;
	while (end != NULL)
	{
		next = end->next;
		free(end);
		end = next;
	}
}
