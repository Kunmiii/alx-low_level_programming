#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for the program
 * Description: programprints numbers of base 16 in lower case
 * Return: zero is returned for successful compilation, otherwise non-zero
 */
int main(void)
{
	int n, a;

	a = 97;
	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	while (a < 102)
	{
		putchar(a);
		a++;
	}

		putchar('\n');

	return (0);
}
