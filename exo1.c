#include <stdio.h>
int main()
{
    int i,N,M,cpt=0,s,
    float moy;
    do{
        printf("Entrer le nombre d'entier que vous voulez saisir: \n");
            scanf("%d",&N);
            if(N<0){
                puts("invalide Entrer le nombre d'entier que vous voulez saisir:");
            }
    }while(N<0);
    for(i=0;i<N;i++){
        do{
            puts("Veuillez  entre un entier positif:");
            scanf("%d",&M);
        }while(M<0);
        if(M%2==0){
            cpt++;
            s+=M;
        }
    }
    moy=s/cpt;
    printf("la moyenne est %d",moy);
    return 0;
}
