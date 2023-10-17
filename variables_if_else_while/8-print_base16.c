#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - entry point
 *   * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar (i + '0');
	}
	putchar('\n');

	return (0);
}
