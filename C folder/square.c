#include <stdio.h>

void sort(int NumArr[], int len){
    
    for(int i = 1; i < len; i++){
        int key = NumArr[i];
        int j = i - 1;

        while(j >= 0 && NumArr[j] > key){
            NumArr[j + 1] = NumArr[j];
            j = j - 1;
        }
        NumArr[j + 1] = key;
    }
}

int main(){

    int NumArr[] = {3,4,5,6,7,1,2};
    int len = sizeof(NumArr)/sizeof(NumArr[0]);

    for(int i = 0; i < len; i++){
    printf("\t %d",NumArr[i]);
    }

    for(int i = 0; i < len; i++){
        NumArr[i] = NumArr[i]*NumArr[i];
    }

    sort(NumArr,len);

    printf("\n");
    for(int i = 0; i < len; i++){
    printf("\t %d",NumArr[i]);
    }
    return 0;
}