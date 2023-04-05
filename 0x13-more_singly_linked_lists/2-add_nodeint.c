#include "lists.h"
/**
 * add_nodeint - start point to add nodes
 * @head: head
 * @n: value
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *combo;

	if (head == NULL)
		return (NULL);
	combo = malloc(sizeof(listint_t));
	if (combo == NULL)
		return (NULL);
	combo->item = n;
	combo->next = *head;
	*head = combo;
	return (combo);
}
