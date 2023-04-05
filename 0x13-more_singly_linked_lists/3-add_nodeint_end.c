#include "lists.h"
/**
 * add_nodeint_end - Start Point
 * @head: start
 * @n: input
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fnode;
	listint_t *snode;

	fnode = malloc(sizeof(listint_t));
	if (fnode == NULL)
		return (NULL);
	fnode->item = n;
	fnode->next = NULL;
	if (*head == NULL)
	{
		*head = fnode;
		return (fnode);
	}
	snode = *head;
	while (snode->next != NULL)
		snode = snode->next;
	snode->next = fnode;
	return (fnode);
}
