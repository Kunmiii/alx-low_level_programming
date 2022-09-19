#include "main.h"
/**
 * 1-swap.c - Don't swap horses in crossing a stream
 * @a: pointer integer a
 * @b: pointer integer b
 *
 * Description: swap values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
