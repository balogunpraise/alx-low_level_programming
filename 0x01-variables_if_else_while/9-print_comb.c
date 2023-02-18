#include<stdio.h>

/**
 * main - prints comination of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n == 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
