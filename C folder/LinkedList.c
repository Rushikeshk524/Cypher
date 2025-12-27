#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head = NULL;

struct node *AddAtEnd(struct node *head, int value);
struct node *Delete(struct node *head, int value);
struct node *Reverse(struct node *head);
void display(struct node *head);

void main(){
   head = AddAtEnd(head,12);
    head = AddAtEnd(head,32);
    head = AddAtEnd(head,19);
    head = AddAtEnd(head,21);
    head = AddAtEnd(head,40);
    display(head);
    head = Reverse(head);
    display(head);
}

struct node *AddAtEnd(struct node *head, int value){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    struct node *ptr = head;
    if(ptr == NULL){
        return temp;
    }
    else{
        while(ptr -> next != NULL){
            ptr = ptr -> next;
        }
        ptr -> next = temp;
    }
    return head;
}

struct node *Delete(struct node *head, int value){
    struct node *ptr = head;
    struct node *temp;
    if(head == NULL){
    printf("\nLinked List is empty");
    return NULL;
    }

    if(head -> data == value){
        temp = head;
        head = temp -> next;
        free(temp);
        return head;
    }

    while(ptr -> next != NULL){
        if(ptr -> next -> data == value){
            temp = ptr -> next;
            ptr -> next = temp -> next;
            free(temp);
            return head;
        }
        ptr = ptr -> next;
    }
    printf("Value not found");
    return head;
}

struct node *Reverse(struct node *head){
    //reverse from top to bottom
    struct node *ptr, *nx, *prev = NULL;
    ptr = head;
    while(ptr != NULL){
        nx = ptr -> next;
        ptr -> next = prev;
        prev = ptr;
        ptr = nx;
    }
    head = prev;
    return head;
}

void display(struct node *head){
    struct node *ptr = head;
    printf("\n");
    if(head == NULL){
        printf("\n Display Linked list is empty");
    }
    else{
        while(ptr != NULL){
            printf(" %d -> ",ptr -> data);
            ptr = ptr -> next;
        }
        printf("NULL");
    }
}


