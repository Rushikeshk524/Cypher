#include <stdio.h>

void printAllocation(const char *title, int allocation[], int processSize[], int n) {
    printf("\n%s\n", title);
    printf("Process No.\tProcess Size\tBlock No.\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, processSize[i]);
        if (allocation[i] != -1) {
            printf("%d\n", allocation[i] + 1);
        } else {
            printf("Not Allocated\n");
        }
    }
}

void firstFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n];

    for (int i = 0; i < n; i++) {
        allocation[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break;
            }
        }
    }

    printAllocation("First Fit Allocation", allocation, processSize, n);
}

void bestFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n];

    for (int i = 0; i < n; i++) {
        allocation[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int bestIdx = -1;

        for (int j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                if (bestIdx == -1 || blockSize[j] < blockSize[bestIdx]) {
                    bestIdx = j;
                }
            }
        }

        if (bestIdx != -1) {
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= processSize[i];
        }
    }

    printAllocation("Best Fit Allocation", allocation, processSize, n);
}

void worstFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[n];

    for (int i = 0; i < n; i++) {
        allocation[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int worstIdx = -1;

        for (int j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                if (worstIdx == -1 || blockSize[j] > blockSize[worstIdx]) {
                    worstIdx = j;
                }
            }
        }

        if (worstIdx != -1) {
            allocation[i] = worstIdx;
            blockSize[worstIdx] -= processSize[i];
        }
    }

    printAllocation("Worst Fit Allocation", allocation, processSize, n);
}

int main() {
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};

    int m = sizeof(blockSize) / sizeof(blockSize[0]);
    int n = sizeof(processSize) / sizeof(processSize[0]);

    int firstBlocks[m];
    int bestBlocks[m];
    int worstBlocks[m];

    for (int i = 0; i < m; i++) {
        firstBlocks[i] = blockSize[i];
        bestBlocks[i] = blockSize[i];
        worstBlocks[i] = blockSize[i];
    }

    printf("Sample Block Sizes: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", blockSize[i]);
    }

    printf("\nSample Process Sizes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", processSize[i]);
    }
    printf("\n");

    firstFit(firstBlocks, m, processSize, n);
    bestFit(bestBlocks, m, processSize, n);
    worstFit(worstBlocks, m, processSize, n);

    return 0;
}
