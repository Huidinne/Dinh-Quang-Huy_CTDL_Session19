#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) {
        printf("Memory allocation failed for Node\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void inorder(Node* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);

}
int main() {
    int n;
    scanf("%d", &n);
    Node* root = createNode(n);
    root->left = createNode(3);
    root->right = createNode(4);
    root->left->left = createNode(5);
    inorder(root);
    return 0;
}