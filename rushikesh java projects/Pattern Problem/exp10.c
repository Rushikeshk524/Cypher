#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function for FIFO (First-In, First-Out)
void run_fifo(int requests[], int n, int head) {
    int total_movement = 0;
    int current_pos = head;
    
    printf("\n[FIFO] Seek Sequence: %d", head);
    for (int i = 0; i < n; i++) {
        total_movement += abs(requests[i] - current_pos);
        current_pos = requests[i];
        printf(" -> %d", current_pos);
    }
    printf("\nTotal Head Movement: %d\n", total_movement);
}

// Function for SSTF (Shortest Seek Time First)
void run_sstf(int requests[], int n, int head) {
    int total_movement = 0;
    int visited[100] = {0};
    int current_pos = head;
    
    printf("\n[SSTF] Seek Sequence: %d", head);
    for (int i = 0; i < n; i++) {
        int min_distance = INT_MAX;
        int index = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                int distance = abs(requests[j] - current_pos);
                if (distance < min_distance) {
                    min_distance = distance;
                    index = j;
                }
            }
        }

        visited[index] = 1;
        total_movement += min_distance;
        current_pos = requests[index];
        printf(" -> %d", current_pos);
    }
    printf("\nTotal Head Movement: %d\n", total_movement);
}

int main() {
    int n = 8;
    int head = 53;
    int requests[] = {98, 183, 37, 122, 14, 124, 65, 67};

    printf("Initial Head Position: %d\n", head);
    printf("Request Queue: 98, 183, 37, 122, 14, 124, 65, 67\n");

    run_fifo(requests, n, head);
    run_sstf(requests, n, head);

    return 0;
}