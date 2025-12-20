#include <stdio.h>

#define max(a,b) ((a) > (b) ? (a) : (b))
int main(){
    int Weight[] = { 5, 8, 12, 20, 15};
    int Profit[] = { 10, 30, 20, 15, 10};
    int Capacity = 30;
    int SizeofWeight = sizeof(Weight)/sizeof(Weight[0]);
    int KnapSack[SizeofWeight + 1][Capacity + 1];

    for(int i = 0; i <= Capacity; i++) KnapSack[0][i] = 0;
    for(int i = 0; i <= SizeofWeight; i++) KnapSack[i][0] = 0;

    for(int i = 1; i <= SizeofWeight; i++){
        for(int j = 1; j <= Capacity; j++){
            if(Weight[i-1] <= j){
                KnapSack[i][j] = max(KnapSack[i-1][j] , KnapSack[i - 1][j - Weight[i - 1]] + Profit[i - 1]);
            }
            else{
                KnapSack[i][j] = KnapSack[i - 1][j];
            }
        }
    }
    printf(" Max Profit is %d",KnapSack[SizeofWeight][Capacity]);
    return 0;
}