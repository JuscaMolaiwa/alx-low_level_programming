#include <stdio.h>

/**
 * main - entry point
 * description - comibing two two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	a = 0;

	while (a <= 99)
	{
		b = a;
		while (b <= 99)
		{
			if (b != a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a +  b != 197)
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
