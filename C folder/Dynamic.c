#include <stdio.h>
#include <conio.h>
 
int main(){
    int INF = 99999;
    int v = 4;
    int mat[4][4] = {{0, 3, INF, 7},
                     {INF, 0, 1, INF},
                     {INF, INF, 0, 2},
                     {INF, INF, INF, 0}};
    for(int k = 0; k < v; k++){
        for(int j = 0; j < v; j++){
            for(int i = 0; i < v; i++){
                if(mat[i][j] > mat[i][k] + mat[k][j]){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(mat[i][j] == INF){
                printf("%7s", "INF");
            } else {
                printf("%7d", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}