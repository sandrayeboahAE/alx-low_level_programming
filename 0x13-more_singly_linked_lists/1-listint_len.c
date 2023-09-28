#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h != NULL)
	{
		b++;
		h = h->next;
	}
	return (b);
}
