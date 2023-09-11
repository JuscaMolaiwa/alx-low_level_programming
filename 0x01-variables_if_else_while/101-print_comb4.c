#include <stdio.h>

/**
 * main - entry point
 * description - combining 3 digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	a = 0;

		while (a <= 9)
		{
			b = 0;

			while (b <= 9)
			{
				c = 0;

				while (c <= 9)
				{
					if (a != b && a < b
							&& b != c && b < c)
					{
						putchar(a + 48);
						putchar(b + 48);
						putchar(c + 48);
					if (a +  b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
					}
					c++;
				}
				b++;
			}
			a++;
		}
	putchar('\n');
	return (0);
}

