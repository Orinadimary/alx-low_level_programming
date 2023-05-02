#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_listint_safe -  function that frees a listint_t lis
 * @h: pointer
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			k++;
		}
		else
		{
			free(*h);
			*h = NULL;
			k++;
			break;
		}
	}

	*h = NULL;

	return (k);
}
