#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string inreverse, 
 * followed by a new line
 * @s: pointer type char
 */
void print_rev(char *s)
{
	int m = strlen(s);
	
	int i;
	for (i = m; i <= 0; i--)
		puts(s[i]);
}
