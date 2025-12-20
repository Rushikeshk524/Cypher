#include <stdio.h>
#include <string.h>

void NSMA(char pattern[], char txt[]){
    int i, j;
    int txtlen = strlen(txt); //9
    int patlen = strlen(pattern); //5
    for(i = 0; i <= (txtlen - patlen); i++){
        for(j = 0; j < patlen; j++){
            if(txt[i + j] != pattern[j]){
                break;
            }
        }
        if(j == patlen){
            printf("Pattern Found at index %d\n",i);
            return;
        }
    }
    printf("Pattern not found");
    return;
}

void main(){
    char txt[] = "FIRETRUCK";
    char pattern[] = "TRUCK";
    NSMA(pattern,txt);
}