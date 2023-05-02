#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a  list
 * @head: pointer to  element in the list
 * @n: add in the new element
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *real;
	listint_t *temp = *head;

	real = malloc(sizeof(listint_t));
	if (!real)
		return (NULL);

	real->n = n;
	real->next = NULL;

	if (*head == NULL)
	{
		*head = real;
		return (real);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = real;

	return (real);
}
