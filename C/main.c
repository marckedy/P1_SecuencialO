

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A,B,C,D,M,H1,H2;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    H1=(A*60)+B;
    H2=(C*60)+D;
    H1=H2-H1;
    if(H1<0)
        H1=H1+1440;
    if((H1/60)!=0){
        M=(H1%60);
        H1=H1/60;
    }else {
        M=H1;
        H1=0;
    }
    printf("\n%d\n",H1);
    printf("%d\n",M);
    
    return 0;
}

