#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array
 * of integers, followed by a new line.
 * @a: base address of the array
 * @n: number of element of the array to be printed
 * numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order as they are
 * stored in the array
 * you sre not allowed to use printf
 */
void print_array(int *a, int n)
{
	/*int e;*/

	/*e = sizeof(a);
	b = sizeof(int);*/

	/*c = (e / b);*/

	for (n = 0; n < 5; n++)
	{
		if (a[n] > 0 || a[n] == 0 || a[n] < 0)
		{
			printf("%d", a[n]);
			_putchar(32);
			_putchar(44);
		}

		printf("\n");
	}
}
