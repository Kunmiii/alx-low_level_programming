#include "main.h"
/**
 * swap_int - dont swap horses in crossing a stream
 * @a: pointer integer a
 * @b: pointer integer b
 * Description: swap values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
