// Convert a binary tree to DLL
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

node* prev = nullptr;

node* binaryTreeToDLL(node* root) {
    if (root == nullptr) {
        return nullptr;
    }

    node* head = binaryTreeToDLL(root->left);
    if (prev == nullptr) {
        head = root;
    } else {
        prev->right = root;
        root->left = prev;
    }
    prev = root;
    binaryTreeToDLL(root->right);
    return head;
}
int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    node* dll = binaryTreeToDLL(root);
    return 0;
}