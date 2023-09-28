#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it fails
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *d;
	listint_t *temp = *head;

	d = malloc(sizeof(listint_t));

	if (d == NULL)
		return (NULL);
	d->n = n;
	d->next = NULL;

	if (*head == NULL)
	{
		*head = d;
		return (d);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = d;
	return (d);
}
