#include<stdio.h>

/**
 * main - prints the various sized of the types available
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)", sizeof(char));
	printf("Size of an int: %2d byte(s)", sizeof(int));
	printf("Size of a long int: %2d byte(s)", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)", sizeof(double));
	printf("Size of a float: %2d byte(s)", sizeof(float));
	return (0);
}
