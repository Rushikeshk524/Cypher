#include <stdio.h>

int BinarySearch(int array[], int key, int size){
    int low = 0, high = size-1;

    while(low <= high){
        int mid = (low + high)/2;
        if(array[mid] == key) return mid;
        else if (array[mid] < key) low = mid + 1;
        else high = mid - 1;

    }
    return -1;
}

void main(){
    int array[] = {2, 5, 8, 12, 16, 23, 38};

    int size = sizeof(array)/sizeof(array[0]);
    int key = 5;
    
    int result = BinarySearch(array,key,size);

    printf("Element found at index : %d", result);

}