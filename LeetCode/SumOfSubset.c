#include <stdio.h>

void twosum(int Set[], int Size, int Target, int Subset[], int SubsetSize, int Sum, int Index){
    if(Sum == Target){
        for(int i = 0; i < SubsetSize; i++){
            printf("\t %d",Subset[i]);
        }
        return;
    }

    if(Sum > Target || Index == Size -1) return;

    Subset[SubsetSize] = Set[Index];

    twosum(Set, Size, Target, Subset, SubsetSize + 1, Sum + Set[Index], Index + 1);
    twosum(Set, Size, Target, Subset, SubsetSize, Sum, Index + 1);

}

int main(){
    int Set[] = {15, 7, 2, 11};
    int Size = sizeof(Set)/sizeof(Set[0]);
    int Target = 9;
    int Subset[Size];
    int SubsetSize = 0, Sum = 0, Index = 0;
    twosum(Set, Size, Target, Subset, SubsetSize, Sum, Index);


}