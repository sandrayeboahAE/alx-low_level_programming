#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s_t = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s_t++;
	}

	return (s_t);
}
