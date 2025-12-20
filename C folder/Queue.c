#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 10
char stack_arr[MAX];
int top = -1;
void push(){
    char item;
    printf("\nEnter your character: ");
    scanf(" %c",&item);
    if(top == (MAX-1)){
        printf("\nStack Overflow\n");
        return;
    }
    else{
        top++;
        stack_arr[top] = item;
    }
}
void pop(){
    if(top == -1){
        printf("\nStack underflow");
        return;
    }
    else{
    printf("\nElement popped: %c ",stack_arr[top]);
    top--;
    }
}

void add(char item){
    if(top == (MAX-1)){
        printf("\nStack Overflow\n");
        return;
    }
    else{
        top++;
        stack_arr[top] = item;
    }
}

void dis(){
    printf("%c",stack_arr[top]);
    top--;
}
int main(){
    char str[MAX];
    int choice;
    do{
        printf("\nMENU\n");
        printf("\n1. Push()");
        printf("\n2. Pop()");
        printf("\n3. Exit()");
        printf("\n4. Reverse a string()\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            printf("\nExiting...");
            break;
            case 4:
            printf("Enter your string: ");
            scanf("%s",&str);
            int len = strlen(str);
            for(int i = 0;i < len; i++){
            char item = str[i];
            add(item);
            }
            for(int i = 0;i < len; i++){
                dis();
            }
            break;
            default:
            printf("\nInvalid choice!\n");
            break;
        }
    }while(choice!=3);

    return 0;
}