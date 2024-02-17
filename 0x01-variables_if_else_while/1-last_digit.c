#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function assigns a random number to variable n
 * Return: always (0)
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, i);
	if (i == 0)
		printf("last digit of %d is %d and is 0\n", n, i);
	if (i < 6 && i != 0)
		printf("last digit of %d is %d  and is less than 6 and not 0\n", n, i);
	return (0);
}
