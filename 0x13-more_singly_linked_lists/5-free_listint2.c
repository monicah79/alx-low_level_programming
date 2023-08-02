#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * Return: count
 */

void free_listint2(listint_t **head)
{
	if ((*head) == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *newNode = (*head)->next;

		free((*head));
		(*head) = newNode;
	}
}
