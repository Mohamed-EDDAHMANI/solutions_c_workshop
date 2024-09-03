#include<stdio.h>

int main(){
    int N , tmp;

    printf("Entrer le nombre les elements : \n");
    scanf("%d", &N);

    int t[N], M[N];
    for(int i = 0 ; i < N ; i++){
        printf("-- : ");
        scanf("%d", &t[i]);
    };

    for(int i = 0 ; i < N ; i++){
        for(int y = i+1 ; y < N ; y++){
            if (t[i] > t[y] ){
                tmp = t[i];
                t[i] = t[y] ;
                t[y] = tmp ;
            }
        }
    };

    for(int i = 0 ; i < N ; i++){
        printf("- %d ", t[i]);
    };


    return 0;
};