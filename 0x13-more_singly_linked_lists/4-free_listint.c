#include "lists.h"
/**
 * free_listint - Start point
 * @head: the head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
		free(head);
		head = head->next;
	}
}
