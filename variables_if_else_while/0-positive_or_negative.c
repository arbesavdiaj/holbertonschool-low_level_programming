#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - entry point
 *   * Return: 0
 */

int main() {
    
    srand(time(NULL));

    int n = rand();

    printf("The number: %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    printf("\n");

    return 0;
}

