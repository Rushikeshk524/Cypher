#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Definition of a node in the binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Function to insert nodes into the binary tree
struct Node* insertNode() {
    int data;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &data);
    if (data == -1) return NULL;
    struct Node* newNode = createNode(data);
    printf("Enter left child of %d:\n", data);
    newNode->left = insertNode();
    printf("Enter right child of %d:\n", data);
    newNode->right = insertNode();
    return newNode;
}
// Preorder Traversal (Root, Left, Right)
void preorderTraversal(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main() {
    printf("Create the binary tree:\n");
    struct Node* root = insertNode();
    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");
    return 0;
}