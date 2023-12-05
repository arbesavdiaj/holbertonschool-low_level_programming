#include <stdio.h>

int main(void)
{
	FILE *file_output;

	file_output = fopen("file.txt", "w");

	fprintf(file_output, "%s\n", "hello");

	fclose(file_output);

	return (0);
}
