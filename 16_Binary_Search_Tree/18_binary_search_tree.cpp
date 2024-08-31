// Fix BST with two nodes swapped
#include <iostream>
#include <climits>

using namespace std;

class node {
public:
    int key;
    node *left, *right;
    node(int x) {
        key = x;
        left = right = nullptr;
    }
};

node* prev = nullptr;
node* first = nullptr;
node* second = nullptr;

void fixBST(node* root) {
    if (root == nullptr) {
        return;
    }
    fixBST(root->left);
    if (prev != nullptr && prev->key > root->key) {
        if (first == nullptr) {
            first = prev;
        }
        second = root;
    }
    prev = root;
    fixBST(root->right);
}

void swapNodes(node* first, node* second) {
    int temp = first->key;
    first->key = second->key;
    second->key = temp;
}

void fixSwappedBST(node* root) {
    prev = nullptr;
    first = nullptr;
    second = nullptr;
    fixBST(root);
    if (first != nullptr && second != nullptr) {
        swapNodes(first, second);
    }
}

int main() {
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(2);
    root->left->right = new node(8);
    root->right->left = new node(15);
    root->right->right = new node(25);

    fixSwappedBST(root);

    return 0;
}