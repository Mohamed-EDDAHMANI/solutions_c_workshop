#include<stdio.h>

int main(){
    int N , grande ;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N];

    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    grande = t[0] ; 
    for(int i = 1 ; i < N ; i++){
        if (t[i] > grande){
            grande = t[i] ;
        }
    };
    printf("-le plus grand element dans un tableau est : %d \n", grande);

    return 0;
};