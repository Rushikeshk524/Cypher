#include <stdio.h>
#include <stdlib.h>

struct node *AddAtEnd(struct node *head,int value);
struct node *Delete(struct node *head, int value);
struct node *Reverse(struct node *head);
void Display(struct node *head);

struct node {
    int data;
    struct node *prev;
    struct node *next;
}*head = NULL;

void main(){
    head = AddAtEnd(head, 12);
    head = AddAtEnd(head, 13);
    head = AddAtEnd(head, 14);
    head = AddAtEnd(head, 15);
    head = AddAtEnd(head, 16);
    head = AddAtEnd(head, 17);
    head = AddAtEnd(head, 18);
    head = AddAtEnd(head, 19);
    Display(head);
    head = Reverse(head);
    Display(head);

}

struct node *AddAtEnd(struct node *head, int value){
    struct node *ptr, *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    if(head == NULL){
        temp -> prev = NULL;
        return temp;
    }
    ptr = head;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    temp -> prev = ptr;
    ptr -> next = temp;

    return head;
}

struct node *Delete(struct node *head, int value){
    if(head == NULL){
        printf("Linked List is Empty :(");
    }
    struct node *ptr = head,*temp;
    while(ptr -> next != NULL){
        if(ptr -> next -> data == value){
            temp = ptr -> next;
            ptr -> next = temp -> next;
            temp -> next -> prev = temp -> prev;
            free(temp);
        }
        ptr = ptr -> next;
    }
    return head;
}

void Display(struct node *head){
    
    struct node *ptr = head;
    if(head == NULL){
        printf("\nLinked List is empty");
        return;
    }   
    while(ptr != NULL){
        printf(" %d -> ",ptr -> data);
        ptr = ptr -> next;
    }
    printf("NULL");
    printf("\n");
}

struct node *Reverse(struct node *head){
    if(head == NULL || head -> next == NULL){
        printf("Linked List is empty OR Linked List only has one node :[");
        return head;
    
    }
    struct node *ptr = head,*prev = NULL;
    while(ptr != NULL){
        ptr -> prev = ptr -> next;
        ptr -> next = prev;
        prev = ptr;
        ptr = ptr -> prev;
    }
    head = prev;
    return head;
}