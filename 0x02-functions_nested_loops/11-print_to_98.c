#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints the given value to ninety eight
 * @n: value
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if  (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
}
