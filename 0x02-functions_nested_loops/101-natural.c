#include<stdio.h>

/**
 * natural_numbers - prints the multiples of three or five
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum;

	n = 1024;
	while (n <1024)
	{
		if(n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d", sum);
	return (0);
}
