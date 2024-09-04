#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;

    printf("Entrez le coefficient a : ");
    scanf("%f", &a);
    printf("Entrez le coefficient b : ");
    scanf("%f", &b);
    printf("Entrez le coefficient c : ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les racines sont réelles et distinctes : %.2f et %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Les racines sont réelles et égales : %.2f et %.2f\n", root1, root2);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les racines sont complexes et conjuguées : %.2f + %.2fi et %.2f - %.2fi\n", 
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
