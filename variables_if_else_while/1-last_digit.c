#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - entry point
 *   * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit: %d is greater than 5\n", n);

	else if (n % 10 == 0)
		printf("Last digit: %d and is 0\n");
	else
		printf("Last digit: %d and is less than 6 not 0\n");

	return (0);
}
