#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - linked list function to print elements and size
 * @head: a pointer to a struct typedef to list_t
 * Return: count
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *newNode = head->next;

		free(head);
		head = newNode;
	}
}
