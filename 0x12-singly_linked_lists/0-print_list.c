#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
