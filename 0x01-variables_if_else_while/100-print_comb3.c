#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 **/
int main(void)
{

		int i, j, k;

		for (i = 0; i < 100; i++)
		{
			j = (i / 10);
			k = (i % 10);

			if (k > j)
			{
				j = (j + '0');
				k = (k + '0');

				putchar(j);
				putchar(k);

				if (i == 89)
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
