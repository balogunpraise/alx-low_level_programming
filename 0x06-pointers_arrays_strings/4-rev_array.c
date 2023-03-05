#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: items
 * @n: length of array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
