#include <stdio.h>

/**
 * main - entry point
 * description - writing all single digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 0;

	for (; a <= 9 ;)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return (0);
}
