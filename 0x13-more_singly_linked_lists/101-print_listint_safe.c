#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list, function can print
 *                      lists with a loop
 * @head: pointer to first node in the list
 * Return: the number of nodes in the list, if the function fails, exit the
 *         program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *start;
	size_t count, i;

	count = 0;
	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *) tmp, tmp->n);
		count++;
		tmp = tmp->next;
		start = head;
		i = 0;
		while (i < count)
		{
			if (start != tmp)
			{
				start = start->next;
				i++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)start, start->n);
				return (count);
			}
		}
	}
	return (count);
}
