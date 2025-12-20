#include <stdio.h>

void SubsetSum(int set[], int size, int subset[], int SubsetSize, int sum, int target, int index){
    if(sum == target){
        for(int i = 0; i < SubsetSize; i++){
            printf("%d ",subset[i]);
        }
        printf("\n");
        return;
    }
    if(sum > target || index == size - 1) return ;
    subset[SubsetSize] = set[index];
    SubsetSum(set, size, subset, SubsetSize + 1, sum + set[index], target, index + 1);
    SubsetSum(set, size, subset, SubsetSize, sum, target, index + 1);
}

void main(){
    int set[] = {10,7,5,18,12,20,15};
    int size = sizeof(set)/sizeof(set[0]);
    int target = 35;
    int subset[size];
    int SubsetSize = 0, sum = 0, index = 0;
    SubsetSum(set, size, subset, SubsetSize, sum, target, index);
}