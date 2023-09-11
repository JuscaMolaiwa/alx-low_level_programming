#include <stdio.h>
/**
 * main - entry point
 * description - writing a script that prints from a to z
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z' ;)
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');
		return (0);
}
