#include <stdio.h>

void main(){
    int array[] = {34, 23, 55, 25, 89, 11, 52, 40};
    for(int i = 0; i < 8; i++){
        for (int j = i + 1; j < 8; j++){
            if(array[j] < array[i]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0; i < 8; i++){
        printf("\t %d", array[i]);
    }
}