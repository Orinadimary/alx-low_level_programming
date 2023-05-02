#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the lists
 * Return:  data inside the deleted elements 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
