#include <stdio.h>

void SumOfSubset(int Set[], int Size, int Target, int Subset[], int SubsetSize, int Sum, int Index){
    if(Sum == Target){
        for(int i = 0; i < SubsetSize; i++){
            printf("\t %d",Subset[i]);
        }
        return;
    }

    if(Sum > Target || Index == Size -1) return;

    Subset[SubsetSize] = Set[Index];

    SumOfSubset(Set, Size, Target, Subset, SubsetSize + 1, Sum + Set[Index], Index + 1);
    SumOfSubset(Set, Size, Target, Subset, SubsetSize, Sum, Index + 1);

}

int main(){
    int Size;
    int Set[Size];
    int Target;
    int Subset[Size];
    int SubsetSize = 0, Sum = 0, Index = 0;
    printf("Enter size of Set: ");
    scanf("%d",&Size);
    
    printf("\nEnter Target value: ");
    scanf("%d",&Target);
    
    printf("\nEnter Set element: \n");
    for(int i = 0; i < Size; i++){
        scanf("%d",&Set[i]);
    }
     SumOfSubset(Set, Size, Target, Subset, SubsetSize, Sum, Index);


}