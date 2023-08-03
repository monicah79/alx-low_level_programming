#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * remove_loop - finds the loop in a linked list and adds NULL to end it
 * @head: pointer to first node in the list
 * Return:  none
 */
void remove_loop(listint_t *head)
{

	listint_t *tmp, *start;
	size_t i, count;

	count = 0;
	tmp = head;
	while (tmp)
	{
		count++;
		start = head;
		i = 0;
		while (i < count)
		{
			if (start == tmp->next)
			{
				tmp->next = NULL;
				return;
			}
			start = start->next;
			i++;
		}
		tmp = tmp->next;
	}
}
/**
 * free_listint_safe - frees a listint_t linked list, function can print
 *                      lists with a loop
 * @h: pointer to pointer to first node in the list
 * Return: the size of the list that was free'd, sets head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count;

	remove_loop(*h);
	count = 0;
	while (h != NULL && *h != NULL)
	{
		count++;
		tmp = *h;
		*h = tmp->next;
		free(tmp);
	}
	return (count);
}
