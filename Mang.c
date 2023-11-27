#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int mang[SIZE];
    int i;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        mang[i] = -1 * (rand() % 100 + 1);
    } 

    printf("Mang ngau nhien gom %d so nguyen am:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
