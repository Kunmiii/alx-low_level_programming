#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 **/
int main(void)
{

		int i;

		for (i = 48; i < 58; i++)
		{
			putchar(i);
			if (i == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
			putchar('\n');

		return (0);

}
