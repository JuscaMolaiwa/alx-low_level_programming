#include <stdio.h>

/**
 * main - entry point
 * description - writing a fuction that prints all single digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	a = '0';

	for (; a <= '9' ;)
	{
		b = '0';

		for (; b <= '9' ;)
		{
			if (b != a && a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' &&  b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
