#include <stdio.h>
#define v 4

void main(){
    int INF = 99999;
    int Dist[v][v] = { {0, 3, INF, 2},
                       {5, 0, 6, INF},
                       {INF, INF, 0, 4},
                       {INF, -1, 3, 0} };

    for(int k = 0; k < v; k++){
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                if(Dist[i][j] > Dist[i][k] + Dist[k][j]){
                    Dist[i][j] = Dist[i][k] + Dist[k][j];
                }
            }
        }
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(Dist[i][j] == INF){
                printf("%7s","INF");
            }
            printf("%7d",Dist[i][j]);
        }
        printf("\n");
    }
}