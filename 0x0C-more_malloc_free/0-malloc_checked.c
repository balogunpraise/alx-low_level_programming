#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
 * malloc_checked - Returns the size
 * @b: parameter
 * Return: address to the newly created item
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
