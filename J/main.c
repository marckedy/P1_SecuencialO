

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int b,k,a,x=0;
    long int n, t=0;
    scanf("%d %d",&b,&k);
    for(k;k>=1;k--){
        scanf("%d",&a);
        if(k==1)
            t=t+a;
        else{
            x++;
            
            n=a*(pow(b,k-x));
            t=t+n;
        }
    }
    if(t%2==0)
        printf("par");
    else
        printf("impar");
    return 0;
}

