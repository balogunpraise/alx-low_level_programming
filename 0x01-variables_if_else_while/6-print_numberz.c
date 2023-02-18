#include<stdio.h>

/**
 * main - prints numbers
 *
 * Retrun: Always 0  (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar((char)n);
		n++;
	}
	putchar('\n');
	return (0);
}
