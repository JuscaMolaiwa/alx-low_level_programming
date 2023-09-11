#include <stdio.h>

/**
 * main - entry point
 * description - writing all digits using putchar
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
	putchar('\n');
	return (0);
}
