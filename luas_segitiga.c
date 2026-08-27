#include <stdio.h>

int main() {
    float a, t, l;

    printf("Masukkan alas segitiga: ");
    scanf("%f", &a);

    printf("Masukkan tinggi segitiga: ");
    scanf("%f", &t);

    l = 0.5 * a * t;

    printf("Luas segitiga adalah: %.2f\n", l);

    return 0;
}