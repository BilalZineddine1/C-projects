#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,k,D,p;
    k=0; D=0;
    do{
        printf("Donner la representation binaire du droite vers gauche pour arreter taper <0\n");
        scanf("%d",&N);
        if(N==1){
            p=1;
            for(i=0;i<k;i++) p*=2;
            D+=p;
        }
        k++;
    }while(N>=0);
    printf("la representation en decimale est : %d\n",D);
    printf("la representation en Hexa-decimale est : %X\n",D);
    return 0;
}
