// Print left view of binary tree
#include <iostream>
using namespace std;

// Recursive method
class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) {
        key = k;
        left = right = nullptr;
    }
};

void printLeft(node* root, int level, int& maxLevel) {
    if (root == nullptr) {
        return;
    }
    if (level > maxLevel) {
        cout << (root->key) << " ";
        maxLevel = level;
    }
    printLeft(root->left, level + 1, maxLevel);
    printLeft(root->right, level + 1, maxLevel);
}

void printLeftView(node* root) {
    int maxLevel = 0;
    printLeft(root, 1, maxLevel);
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printLeftView(root);

    return 0;
}