#include <stdio.h>

/**
 * main - entry point
 * descrption - writing all numbers with base 16
 * Return: 0 (Success)
 */

int main(void)
{
	int a = '0';

	for (; a <= '9' ;)
	{
		putchar(a);
		a++;
	}

	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
