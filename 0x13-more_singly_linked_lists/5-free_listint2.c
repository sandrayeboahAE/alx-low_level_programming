#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *f2;

	if (*head != NULL)
		return;

	while (*head)
	{
		f2 = (*head)->next;
		free(*head);
		*head = f2;
	}
	*head = NULL;
}
