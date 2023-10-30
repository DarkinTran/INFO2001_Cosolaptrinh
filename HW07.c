#include <stdio.h>

int main() {
    double C, F;

    printf("C: ");
    scanf("%lf", &C);

    if (C < 0 || C > 106) {
        printf("Ko hop le\n");
    } else {
        F = (C * 9 / 5) + 32;
        printf("F: %.2lf\n", F);
    }
    return 0;
}

