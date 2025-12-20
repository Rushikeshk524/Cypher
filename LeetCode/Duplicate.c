#include <stdio.h>

int Duplicate(int test[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(test[i] == test[j]) return test[i];
        }
    }
    return -1;
}

void main(){
    int test[] = {2, 3, 4, 5 , 2, 1};
    int size = sizeof(test)/sizeof(test[0]);
    int result = Duplicate(test,size);
    printf("%d is repeated",result);
}