#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: pointer
 * @str: pointer
 * Return: new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        list_t *new;

        unsigned int len = 0;

        while (str[len])
                len++;
        new = malloc(sizeof(dlist_t));
        if (!new)
                return (NULL);
        new->str = strdup(str);
        new->len = len;
        new->next = (*head);
        (*head) = new;

        return (*head);
}                   
