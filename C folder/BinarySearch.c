#include <stdio.h>
int function(int LP, int UP, int key);
int array[] = {5,8,12,18,34,35};
void main(){ 
    int size = sizeof(array) / sizeof(array[0]); //size = 6
    //key = 34
    int mid,UP = 5,LP = 0;
    int key = 3;
    int result = function(LP,UP,key);
    if(result > -1){
    printf("key = %d is stored at %d",key,result);
}
else{
    printf("key = %d not found",key);
}
}
int function(int LP,int UP,int key){
   if(UP < LP) return -1; 

   int mid = (UP + LP) / 2;

   if(array[mid] == key) return mid;
   else if(array[mid] > key) return function(LP,mid -1,key);
   else return function(mid+1,UP,key);
}