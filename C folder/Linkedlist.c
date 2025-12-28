#include <stdio.h>
#include <stdlib.h>

struct node *create(struct node *head);
struct node *AddAtEnd(struct node *head, int value);
struct node *Delete(struct node *head, int value);
struct node *SortList(struct node *head);
struct node *Reverse(struct node *head);
void display(struct node *head);

struct node{
    int data;
    struct node *next;
}*head = NULL;


void main(){
    int num;
    head = AddAtEnd(head,12);  
    head = AddAtEnd(head,23);  
    head = AddAtEnd(head,15);  
    head = AddAtEnd(head,17);  
    head = AddAtEnd(head,13);  
    head = AddAtEnd(head,35);  
    head = AddAtEnd(head,10);
    display(head);        
    head = SortList(head);
    display(head);  
    

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

struct node *Reverse(struct node *head){
    struct node *ptr, *nx, *prev;
    prev = NULL;
    if(head == NULL){
        printf("Reverse Linked List is empty");
        return head;
    }
    ptr = head;
    while(ptr -> next != NULL){
        nx = ptr -> next;
        ptr -> next = prev;
        prev = ptr;
        ptr = nx;
    }
    head = prev;
    return head;
}

void display(struct node *head){
    struct node *ptr;
    ptr = head;
    printf("\n");
    if(ptr == NULL){
        printf("Display Linked list is empty");
    }
    else{
        while(ptr != NULL){
            printf(" %d -> ", ptr -> data);
            ptr = ptr -> next;

        }
        printf(" NULL");
    }
}

struct node *Delete(struct node *head, int value){
    struct node *ptr, *temp;
    ptr = head;
    
    if(head == NULL){
        printf("\n Linked list is empty :( ");
        return head;
    }
    if(head -> data == value){
        temp = head;
        head = head -> next;
        free(temp);
        return head;
    }

    while(ptr -> next != NULL){
        if(ptr -> next ->  data == value){
            temp = ptr -> next;
            ptr -> next = temp -> next;
            free(temp);
            return head;
        }
        ptr = ptr -> next;
    }
    printf("\nValue not found");
    return head;
}
//selection Sort on linked list (only data not whole nodes)
struct node *SortList(struct node *head){
    struct node *ptr = head;
    struct node *temp;
    struct node *minNode;

    while(ptr != NULL){
        minNode = ptr;
        temp = ptr -> next;

        while(temp != NULL){
            if(temp -> data < minNode -> data){
                minNode = temp;
            }
            temp = temp -> next;
        }
        if(ptr != minNode){
            int tempData = ptr -> data;
            ptr -> data = minNode -> data;
            minNode -> data = tempData;
        }
        ptr = ptr ->next;
    }
    return head;
}