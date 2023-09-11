#include <stdio.h>

/**
 * main - entry point
 * description -  wrinting all possible signle digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a = '0';

	for (; a <= '9' ;)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
