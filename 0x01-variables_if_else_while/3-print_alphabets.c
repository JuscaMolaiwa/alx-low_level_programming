#include <stdio.h>
/**
 * main - entry point
 * description - writing a script that prints from a to z
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	for (; ch <= 'z' ;)
	{
		putchar(ch);
		ch++;
	}
	for (; CH <= 'Z' ;)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

