#include<stdio.h>

int main(){
    int N , petit ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N];

    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    petit = t[0] ; 
    for(int i = 1 ; i < N ; i++){
        if (t[i] < petit){
            petit = t[i] ;
        }
    };
    printf("-le plus petit element dans un tableau est : %d \n", petit);

    return 0;
};