#include "lists.h"
/**
 * print_listint - prints the items of a list
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int index = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->item);
		h = h->next;
		index++;
	}
	return (index);
}
