#include <stdio.h>

/**
 * main - entry point
 * description - writing all alphabet except for q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z' ;)
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}

