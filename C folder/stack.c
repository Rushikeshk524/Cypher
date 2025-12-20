#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main() {
    int choice, item;

    while (1) {
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.quit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("item to be inserted: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                if (!isEmpty()) {
                    printf("popped item is: %d\n", pop());
                } else {
                    printf("stack is empty\n");
                }
                break;
            case 3:
                if (!isEmpty()) {
                    printf("item is: %d\n", peek());
                } else {
                    printf("stack is empty\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("wrong choice\n");
        }
    }
    return 0;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("stack is empty\n");
        return;
    }
    printf("stack elements are\n");
    for (i = top; i >= 0; i--) {
        printf("%d\t", stack_arr[i]);
    }
    printf("\n");
}

void push(int item) {
    if (isFull()) {
        printf("stack is full\n");
        return;
    }
    top++;
    stack_arr[top] = item;
}

int pop() {
    int item;
    if (isEmpty()) {
        printf("stack is empty\n");
        return 0;
    }
    item = stack_arr[top];
    top--;
    return item;
}

int peek() {
    int item;
    if (isEmpty()) {
        printf("stack is empty\n");
        return 0;
    }
    item = stack_arr[top];
    return item;
}

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull() {
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}