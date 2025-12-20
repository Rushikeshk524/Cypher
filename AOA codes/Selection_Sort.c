/*Selection Sort is a simple, in-place comparison sorting algorithm. It works by repeatedly finding the minimum (or maximum) element from the unsorted part of the list and putting it at the beginning of the sorted part. The algorithm maintains two sub-arrays in a given array*/

#include <stdio.h>

void main(){
    int array[] = {9, 11, 6, 1, 3, 12, 4};
    int i, j , temp;
    int size = sizeof(array)/sizeof(array[0]);
    
    for( i = 0; i < size - 1; i++){
        int min = i;
        for(j = i + 1; j < size; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        if(min!= i){
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
    for(i = 0; i < size - 1; i++){
        printf("\t %d", array[i]);
    }
}
