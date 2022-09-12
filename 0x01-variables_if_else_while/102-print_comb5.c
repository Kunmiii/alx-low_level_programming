#include <stdio.h>
/**
 * main - main program starts at this point.
 * Description: write a program that prints possible.
 * The numbers should range from 0 to `99`.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as `01`.
 * The combination of numbers must be separated by comma, followed by a space.
 * The combinations of numbers should be printed in ascending order.
 * You can only use the putchar function.
 * You can only use putchar eight times maximum in your code.
 * You are not allowed to use any variable of type char.
 * All your code should be in the main function.
 * Return: 0
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = (i / 10);
		b = (i % 10);

		for (j = 0; j < 100; j++)
		{
			c = (j / 10);
			d = (j % 10);

			if ( a < c || (a == c && b < d))
			{
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

	}
		putchar(10);

		return(0);
}
