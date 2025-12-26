#include <stdio.h>
#include <stdbool.h>
int TwoSum(int arr[], int target,int size){
//Selection Sort O(n) complexity
    for(int i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
//Instead of comparing one value at a time use two pointer approach
    int left = 0;
    int right = size - 1;
    bool found = false;
    while(left < right){

        int sum = arr[left] + arr[right];

        if(sum == target){
            printf("%d %d \n",arr[left],arr[right]);
            found = true;
            left++;
            right--;
        }
        else if(sum < target) {
            left++; //Need larger sum, increment left pointer
        }
        else{
            right--; //need smaller sum, decrement right pointer
        }
    }
    if(!found){
        printf("No pairs found\n");
    }
    
}

int main(){
    int arr[] = {2,3,4,1,5,3,7};
    int target = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    TwoSum(arr,target,size);
    return 0;
}