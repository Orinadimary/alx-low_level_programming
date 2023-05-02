#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning
 * @head: pointer to list int
 * @n: interger to oint to
 * Return: new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *real;

	real = malloc(sizeof(listint_t));
	if (!real)
		return (NULL);

	real->n = n;
	real->next = *head;
	*head = real;

	return (real);
}
