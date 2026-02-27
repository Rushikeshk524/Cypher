#include <stdio.h>

int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len; i++){
        printf("\t %d",arr[i]);
    }
    int left = 0;
    int right = len - 1;
    int temp;
    while(left < right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    printf("\n Reverse String\n");
    for(int i = 0; i < len; i++){
        printf("\t %d",arr[i]);
    }
    return 0;
}