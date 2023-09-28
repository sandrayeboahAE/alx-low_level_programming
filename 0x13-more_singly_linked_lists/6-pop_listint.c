#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node listint_t linked list
 *@head: pointer to the first element in the linked list
 *Return: the head node's data, or 0 if its empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del;

	if (*head == NULL)
		return (0);
	del = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (del);
}
