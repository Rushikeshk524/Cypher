#include <stdio.h>
int main(){      //0,01,2,3,4,05,6//
    int array[] = {9,11,6,1,3,12,4};
    int i,j,temp; // size = 7 
    int size = 7;
    for(i = 0;i < size-1; i++){
        int min = i;
        for(j = i + 1;j < size; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        if(min != i){
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
        }
    }
    for(i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    return 0;
}