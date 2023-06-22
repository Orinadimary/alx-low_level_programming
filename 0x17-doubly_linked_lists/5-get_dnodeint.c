#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of linked list
 * @head: pointer
 * @index: index to node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node = head;

	if (index_node == NULL)
		return (NULL);

	while (index_node != NULL && index > 0)
	{
		index_node = index_node->next;
		index--;
	}
	return (index_node);
}
