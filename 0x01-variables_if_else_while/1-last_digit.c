#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for the program
 * Description: program generates, checks got equal to, less than or greater a number
 * Return: zero is returned for successful compilation, otherwise non-zero
 */
int main(void)
{
		int n, rm;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		rm = n % 10;
		/* check if last digit of n is greater 5, equal 0 or less than 6*/
		if (rm> 5)
		{
		printf("Last digit of %i is %i and is greater than 0\n", n, rm);
		}
		else if (rm == 0)
		{
		printf("Last digit of %i is %i and is 0\n", n, rm);
		}
		else
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, rm);
		}
		return (0);
}
