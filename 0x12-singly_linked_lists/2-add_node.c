#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be added in the node
 * Return: the address of the new element or return NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int len = 0;

	while (str[len])
		len++;
	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);
	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
