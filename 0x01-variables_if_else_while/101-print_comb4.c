#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 **/
int main(void)
{

		int i, j, k, l;

		for (i = 0; i < 1000; i++)
		{
			j = (i / 100);
			k = (i / 10) % 10;
			l = (i % 10);

			if (j < k && k < l)
			{
				j = (j + '0');
				k = (k + '0');
				l = (l + '0');

				putchar(j);
				putchar(k);
				putchar(l);

				if (i < 700)
				{
					break;
				}

				putchar(44);
				putchar(32);
			}
		}
			putchar('\n');

		return (0);

}
