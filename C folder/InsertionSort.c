#include <stdio.h>
void main(){
    int array[] = {5,12,9,8,4,3};
    int i,j;
    int size = 6;
    for( i = 1; i < size; i++){
        int key = array[i];
        j = i-1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
    for(i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
}