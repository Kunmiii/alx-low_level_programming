#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for the program
 * Description: programprints letter a-z in lowercase
 * in reverse order
 * Return: zero is returned for successful compilation, otherwise non-zero
 */
int main(void)
{
	char initialXter = 'z';

	while (initialXter >= 'a')
	{
		putchar(initialXter);
		initialXter--;
	}
		putchar('\n');

	return (0);
}
