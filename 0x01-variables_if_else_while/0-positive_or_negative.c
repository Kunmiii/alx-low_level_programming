#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for the program
 * Description: program generates and prints random numbers
 * Return: zero is returned for successful compilation, otherwise non-zero
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* check if generated number is +ve, zero or -ve */
		if ( n > 0)
		{
			printf("%i is positive\n", n);
		}
	       	else if (n == 0)
		{
			printf("%i is zero\n", n);
		}
		else
		{
			printf("%i, is negative\n", n);
		}
		return (0);

}
