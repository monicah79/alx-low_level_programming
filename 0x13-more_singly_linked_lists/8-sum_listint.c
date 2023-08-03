#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - eturns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node
 * Return: sum of all the data(n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
