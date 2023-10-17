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
	char b;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar (b);
	}
	putchar('\n');

	return (0);
}
