#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node to position
 *@head: pointer to node
 * @idx: index to the node
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *ins;
	listint_t *temp = *head;

	ins = malloc(sizeof(listint_t));
	if (!ins || !head)
		return (NULL);

	ins->n = n;
	ins->next = NULL;

	if (idx == 0)
	{
		ins->next = *head;
		*head = ins;
		return (ins);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			ins->next = temp->next;
			temp->next = ins;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
