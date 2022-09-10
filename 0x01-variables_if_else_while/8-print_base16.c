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
	int n;
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (n <= 58)
	{
		putchar(n);
		n++;
	}
		putchar('\n');

	return (0);
}
