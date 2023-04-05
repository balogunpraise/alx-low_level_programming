#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - this is a singly linked list
 * @item: integer item
 * Description: a singly list node
 */
typedef struct listint_s
{
	int item;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif /* LIST_H */
