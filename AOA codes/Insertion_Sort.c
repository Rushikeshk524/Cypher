/*Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.
    • We start with the second element of the array as the first element is assumed to be sorted.
    •Compare the second element with the first element if the second element is smaller then swap them.
    • Move to the third element, compare it with the first two elements, and put it in its correct position
    • Repeat until the entire array is sorted.
*/
# include <stdio.h>

void Insertion_Sort(int array[], int size){
    int i;
    for (i = 1; i < size; i++){ //Start from 2nd element
        int key = array[i]; //select the latest element and store it in key
        int j = i - 1; //select element behind latest element
        while(j >=0 && array[j] > key){ //check if the previous element is greater then the latest one
            array[j + 1] = array[j]; // if it is true then put the behind element in front 
            j = j - 1; //go behind and and check again if the previous element is greater then the latest one
        }
        array[j + 1] = key; //put the latest element where it belongs to.
    }
}
void main(){
    //take input from user//
    int array[]= {34, 45, 23, 11, 89, 43, 8};
    int size = sizeof(array)/sizeof(array[0]); //calculate size of array
    Insertion_Sort(array,size); //call Insertion Sort
    for(int i = 0; i < size; i++){ //print result
        printf("\t %d", array[i]);
    }
    printf("\nArray Succesfully Sorted");
}
