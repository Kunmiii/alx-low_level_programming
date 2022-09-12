#include <stdio.h>
/**
 * main: main program starts at this point
 *
 * Description: write a program that prints possible
 * combinations of twotwo-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 99; i++)
	{
		a = (i / 10);
		b = (i % 10);

		for (j = 0; j < 98; j++)
		{
			c = (j / 10);
			d = (j % 10);

			putchar(a + '0');
			putchar(b + '0');
			putchar(32);

			putchar(c + '0');
			putchar(d + '0');

			if (i == 98 && j == 99)
				break;

			putchar(44);
			putchar(32);
		}

	}

	return (0);
}
