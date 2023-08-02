#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - function
* @h:  argument
* Return: returns sum
*
*/
size_t print_listint(const listint_t *h)
{
int sum = 0;

while (h != NULL)
{
printf("%d\n", h->n);
sum += 1;
h = h->next;
}
return (sum);
}
