#include <stdio.h>
int main()
{
    int N;
    do{
        printf("entre des entier positif entre 0 pour arreter");
            scanf("%d",&N);
            if(N==0){
                printf("invalide");
            }
    }while(N>0);
    printf("%d",N);
    return 0;
}
