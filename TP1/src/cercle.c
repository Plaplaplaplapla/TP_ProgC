#include <stdio.h>
#include <string.h>

int main() {
    double pi = 3.14159;
    double rayon = 6.0;

    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    printf("Aire du cercle = %.2f\n", aire);
    printf("Perimetre du cercle = %.2f\n", perimetre);

    return 0;
}


