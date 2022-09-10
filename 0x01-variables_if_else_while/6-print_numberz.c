#include <stdio.h>
/**
 * main - program entry
 * Description: prints all single digit of base 10
 * starting from 0.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
		putchar('\n');

	return (0);
}
