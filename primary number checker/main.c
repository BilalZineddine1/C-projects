#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,sum,num,a;
    sum = 0;
    printf("Entrez votre nombre\n");
    scanf("%d",&num);
    for(i = 2; i <= num; i++){
        a=1;
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                a = 0;
                break;
            }
        }
    if(a==1){
        sum+=i;
    }
    }
    printf("la somme est : %d\n",sum);
    return 0;
}
