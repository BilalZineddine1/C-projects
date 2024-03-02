#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i,S,R,k,N;
    bool A;
    printf("donner un entier positive N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
    k=1;
    S=0;
    do{
        R=i%k;
        if(R==0) S=S+k;
        if(S==i){
            A=true;
            break;
        }
        k++;
        A = false;
    }while(S < i);
        if(A) printf("%d\n",i);
    }
    return 0;
}
