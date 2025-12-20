#include <stdio.h>

int FractionalKnapSack(int items[], int values[], int weight[], double ratios[],int Capacity,int size){
    //calculate ratios
    int i,j;
    for(i = 0; i < size - 1; i++){
        ratios[i] = (double)values[i] / weight[i];
    }

    //Selection Sort
    int temp;
    for(i = 0; i < size - 1; i++){
        int min = i;
        for(j = 0; j < size - 1; j++){
            if(ratios[min] > ratios[j]) min = j;
            if(min != i){
                temp = ratios[i];
                ratios[i] = ratios[min];
                ratios[min] = temp;

                temp = items[i];
                items[i] = items[min];
                items[min] = temp;

                temp = values[i];
                values[i] = values[min];
                values[min] = temp;

                temp = weight[i];
                weight[i] = weight[min];
                weight[min] = temp;
            } 
        }
    }
    //Filling KnapSackE
    double TotalProfit = 0;
    for(i = 0; i < size - 1; i++){
        if(weight[i] <= Capacity) {
            Capacity = Capacity - weight[i];
            TotalProfit = TotalProfit + values[i];
        }
        else{
            double fraction = (double)Capacity / weight[i];
            double fractionalValue = values[i] * fraction;
            TotalProfit = TotalProfit + fractionalValue;
            Capacity = 0;
        }
        if(Capacity == 0){
            break;
        }
    }
    return TotalProfit;
}

void main(){
    int items[] = {1, 2, 3, 4, 5};
    int values[] = {60, 100, 120, 80, 90};
    int weight[] = {10, 20, 30, 15, 25};
    double ratios[5];

    int size = sizeof(items)/sizeof(items[0]);
    int Capacity = 60;
    printf("Total profit = %d",FractionalKnapSack(items,values,weight,ratios,Capacity,size));
}