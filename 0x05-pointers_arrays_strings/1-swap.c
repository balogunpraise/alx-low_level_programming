#include "main.h"

/**
 * swap_int - swaps the value of two integers using their pointers
 * @a: input1
 * @b: input2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
