#include "lists.h"
/**
 * listint_len - trasverse a linked list of given length
 * @h: linkedlist head
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
