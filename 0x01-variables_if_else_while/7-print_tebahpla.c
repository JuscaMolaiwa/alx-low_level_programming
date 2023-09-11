#include <stdio.h>

/**
 * main - entry point
 * description - writing all alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	for (; ch >= 'a' ;)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
