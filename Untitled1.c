#include <stdio.h>
int main()
{
    int a,i,cpt,j;
    cpt=0;
    do{
        puts("Entre un entier positif");
        scanf("%d",&a);
    }while(a<=0);
    for(i=1;i<=a;i++){
            cpt++;
    }
    printf("%d",cpt);
    return 0;
}
