#include <stdio.h>


int Verification(int n) {
    if (n % 2 == 0) {
        return 1;
    }else
        return 0 ;
}

int main() {
    int n;

    printf("Entrez un numero : ");
    scanf("%d", &n);

    int result = Verification(n);
    
     if (result == 0) {
        printf("Le nombre %d est impair \n", n);
    }else
        printf("Le nombre %d est pair \n", n);

    return 0;
}
