#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *second;

	first = *head;
	if (first == NULL)
		return (NULL);
	if (first->next == NULL)
		return (*head);
	second = first->next;
	first->next = NULL;
	while (1)
	{
		if (second->next == NULL)
		{
			second->next = *head;
			*head = second;
			break;
		}
		first = second;
		second = first->next;
		first->next = *head;
		*head = first;
	}
	return (*head);
}
