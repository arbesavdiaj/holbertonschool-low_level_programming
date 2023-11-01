#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
		return (0);
}
