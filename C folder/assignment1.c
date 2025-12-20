#include <stdio.h>
#include <stdlib.h>

#define MAX_CANDIDATES 50000
int main() {
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    
    int *zone1 = (int *)malloc(n1 * sizeof(int));
    int *zone2 = (int *)malloc(n2 * sizeof(int));
    int *zone3 = (int *)malloc(n3 * sizeof(int));
    int *zone4 = (int *)malloc(n4 * sizeof(int));
    int *zone5 = (int *)malloc(n5 * sizeof(int));

    // Read each zone's candidate list
    for (int i = 0; i < n1; i++) {
        scanf("%d", &zone1[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &zone2[i]);
    }
    for (int i = 0; i < n3; i++) {
        scanf("%d", &zone3[i]);
    }
    for (int i = 0; i < n4; i++) {
        scanf("%d", &zone4[i]);
    }
    for (int i = 0; i < n5; i++) {
        scanf("%d", &zone5[i]);
    }

    
    int *count = (int *)calloc(MAX_CANDIDATES, sizeof(int));

    
    for (int i = 0; i < n1; i++) {
        count[zone1[i]]++;
    }
    for (int i = 0; i < n2; i++) {
        count[zone2[i]]++;
    }
    for (int i = 0; i < n3; i++) {
        count[zone3[i]]++;
    }
    for (int i = 0; i < n4; i++) {
        count[zone4[i]]++;
    }
    for (int i = 0; i < n5; i++) {
        count[zone5[i]]++;
    }

    // Count how many candidates are in at least 3 zones
    int elected = 0;
    for (int i = 0; i < MAX_CANDIDATES; i++) {
        if (count[i] >= 3) {
            elected++;
        }
    }

    printf("%d\n", elected);

    
    free(zone1);
    free(zone2);
    free(zone3);
    free(zone4);
    free(zone5);
    free(count);

    return 0;
}