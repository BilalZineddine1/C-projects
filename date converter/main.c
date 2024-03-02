#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1,h1,m1,s1,j2,h2,m2,s2,j,h,m,s;
    printf("donner j1\n");
    scanf("%d",&j1);
    printf("donner h1\n");
    scanf("%d",&h1);
    printf("donner m1\n");
    scanf("%d",&m1);
    printf("donner s1\n");
    scanf("%d",&s1);
    printf("donner j2\n");
    scanf("%d",&j2);
    printf("donner h2\n");
    scanf("%d",&h2);
    printf("donner m2\n");
    scanf("%d",&m2);
    printf("donner s2\n");
    scanf("%d",&s2);
    if(j1>=j2){
            if(h1>=h2){
                if(m1>=m2){
                    if(s1>=s2){
                        s=s1-s2;
                        h=h1-h2;
                        m=m1-m2;
                        j=j1-j2;
                    }
                    else{
                        m1-=1;
                        s1+=60;
                        s=s1-s2;
                        m=m1-m2;
                        h=h1-h2;
                         j=j1-j2;
                    }
                }
                else{
                    if(s1<s2){
                        m1-=1;
                        s1+=60;
                        s=s1-s2;
                                    }
                    else s=s1-s2;
                    h1-=1;
                    m1+=60;
                    m=m1-m2;
                    h=h1-h2;
                    j=j1-j2;
                   
                }
            }
            else{
                if(m1<m2){
                    if(s1<s2){
                        m1-=1;
                        s1+=60;
                        s=s1-s2;
                        }
                    else  s=s1-s2;
                    h1-=1;
                    m1+=60;
                    m=m1-m2;
                }
                else{
                  if(s1>s2){
                    s=s1-s2;
                    m=m1-m2;}
                     else {
                       m1-=1;
                        s1+=60;
                        s=s1-s2;
                       m=m1-m2;}
                }
                j1-=1;
                h1+=24;
                h=h1-h2;
                j=j1-j2; 
            }
           
            printf(" %d j  %d h  %d m  %d s\n",j,h,m,s);
    }
    else
        printf("impossible\n");
    return 0;
}
