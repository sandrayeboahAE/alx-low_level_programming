#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head: first node
 * @index: index of the node
 * Return: pointer to the node or return NULL when empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (temp == NULL)
		return (0);

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
