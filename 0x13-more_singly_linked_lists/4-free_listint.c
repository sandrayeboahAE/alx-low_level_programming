#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
}
