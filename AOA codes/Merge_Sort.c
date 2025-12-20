#include <stdio.h>

void Merge(int array[], int left,int mid, int right){
    int Lsize = mid - left + 1;
    int Rsize = right - mid;
    int LeftArry[Lsize];
    int RightArray[Rsize];
    int i, j, k;

    for(i = 0; i < Lsize; i++){
        LeftArry[i] = array[left + i];
        for(j = 0; j < Rsize; j++){
            RightArray[j] = array[mid + 1 + j];
        }
    }
    i = 0; j = 0; k = left;
    while(i < Lsize && j < Rsize){
        if(LeftArry[i] <= RightArray[j]) array[k++] = LeftArry[i++];
        else array[k++] = RightArray[j++];
    }

    while(i < Lsize) array[k++] = LeftArry[i++];
    while(j < Rsize) array[k++] = RightArray[j++];
}

void MergeSort(int array[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2; 
        MergeSort(array,left,mid);
        MergeSort(array,mid + 1,right);

        Merge(array, left, mid, right);
    }

}

void main(){
    int array[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(array)/sizeof(array[0]);
    int left = 0, right = size - 1;
    MergeSort(array, left, right);
    printf("Array Sorted Succesfully : ");
    for(int i = 0; i < size; i++){
        printf("\t %d", array[i]);
    }
}