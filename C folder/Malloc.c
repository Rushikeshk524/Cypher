#include <stdio.h>
#include <stdlib.h>

struct node *create(struct node *head);
struct node *AddAtEnd(struct node *head, int value);
void display(struct node *head);

struct node{
    int data;
    struct node *next;
}*head = NULL;


void main(){
    head = create(head);
    display(head);

    free(head);

} 

struct node *create(struct node *head){
    int i, NoOfNodes, value;

    printf("Enter no. of nodes: ");
    scanf("%d",&NoOfNodes);

    for(i = 1; i <= NoOfNodes; i++){
        printf("Enter the element to be inserted: \n");
        scanf("%d",&value);
        AddAtEnd(head,value);
    }
    return head;

}

struct node *AddAtEnd(struct node *head, int value){

    struct node *ptr, *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    temp -> data = value;
    temp -> next = NULL;

    if(head == NULL) return temp;

    ptr = head;
    
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = temp;
    
    return head;
}

void display(struct node *head){
    struct node *ptr;
    ptr = head;
    printf("\n");
    if(ptr == NULL){
        printf("Linked list is emply");
    }
    else{
        while(ptr != NULL){
            printf(" %d -> ", ptr -> data);
            ptr = ptr -> next;

        }
        printf(" NULL");
    }
}

  