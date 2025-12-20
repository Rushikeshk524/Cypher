#include<stdio.h>

void main(){
    int M,A=0,Q,S,Q0,P,Q1=0,n,r=0,s=0,t;
    printf("\n Enter multiplicand (Q) : ");
    scanf("%d",&Q);
    printf("\n Enter multiplier (M) : ");
    scanf("%d",&M);
    t = Q;
    s = M;
    while(t!=0 || s!=0){
        t = t/2;
        s = s/2;
        r++;
    }
    n=r+1;
    printf("\n %d",n);
    S = ~M+1; 
    P = (A<<n)|(Q&((1<<n)-1));
    for(r=0;r<n;r++){
        Q0 = P&1;
        if(Q0==1 && Q1==0){
            P = P+(S<<n);
        }
        else if(Q0==0 && Q1==1){
            P = P+(M<<n);
        }
        P = P>>1;
        Q1 = Q0;
    }
    printf("\n %d",P);
}


