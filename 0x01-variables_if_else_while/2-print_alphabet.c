#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for the program
 * Description: programprints letter a-z in lowercase
 * Return: zero is returned for successful compilation, otherwise non-zero
 */
int main(void)
{
		char initialXter = 'a';
		
		while(initialXter <= 'z')
		{
			putchar(initialXter);
			initialXter++;
		}
		putchar('\n');

		return (0);
}
