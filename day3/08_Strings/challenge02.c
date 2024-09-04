#include <stdio.h>

int main() {
    char chen[100] ;
    int count = 0 ;

    printf("Entrer la chaine de caracters : ");
    scanf("%s" , &chen);


    for (int i = 0; chen[i] != '\0'; i++)
    {
        count++ ;
    }
    
    printf("%d" ,count);



    return 0;
}
