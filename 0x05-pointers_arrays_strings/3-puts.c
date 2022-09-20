#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line
 * @str: pointer type char
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
		puts(str[m]);

	puts('\n');
}
