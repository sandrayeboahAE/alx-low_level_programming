#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds  new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 * Return: pointer to the new node or return NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = *head;
	*head = c;

	return (c);
}
