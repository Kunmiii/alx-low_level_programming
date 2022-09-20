#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char array string type
 */
void rev_string(char *s)
{
	int _strlen = strlen(s);

	int temp, i;	
	for (i = 0; i < _strlen/2;  i++)
	{
		temp = s[i];
		s[i] = s[_strlen - i - 1];
		s[_strlen - i - 1] = temp;
	}
}
