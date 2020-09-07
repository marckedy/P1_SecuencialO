

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,c;
    scanf("%d",&N);
    if(N%2==0){
        N=N/2;
        c++;
    }  
    else{
        N++;
        c++;
    }
    if(N/100>0){
        N=N/100;
        c++;
    }
    else
        if(N/10>0){
            N=N/10;
            c++;
        }
    if(N%3==0){
        N--;
        c++;
    }
    printf("%d %d",N,c);
    return 0;
}

