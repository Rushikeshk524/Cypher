#include <stdio.h>
#include <conio.h>

int main(){
    int Capacity = 7;
    int n[] = {1, 2, 3, 4};
    int p[] = {1, 4, 5, 7};
    int w[] = {1, 3, 4, 5};
    int KS[5][8];
    for(int i = 0; i < 5; i++){
        for(int c = 0; c < 8; c++){
            if(i == 0 || c == 0){
                KS[i][c] = 0;
            }
            if(KS[i-1][c-w[i-1]] + p[i-1] > KS[i-1][c]){
                KS[i][c] = KS[i-1][c-w[i]] + p[i];
            }
            else{
                KS[i][c] = KS[i-1][c];
            }
        }
    }
    return KS[3][7];
}