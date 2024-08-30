// Count nodes in a complete binary tree
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

// Naive approach
int countnode(node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        return 1 + countnode(root->left) + countnode(root->right);
    }
}

// Efficient approach
int countnodes(node* root) {
    if (root == nullptr) {
        return 0;
    }

    int lh = 0;
    node* curr = root;
    while (curr != nullptr) {
        lh++;
        curr = curr->left;
    }

    int rh = 0;
    curr = root;
    while (curr != nullptr) {
        rh++;
        curr = curr->right;
    }

    if (lh == rh) {
        return (1 << lh) - 1;
    } else {
        return 1 + countnodes(root->left) + countnodes(root->right);
    }
}
int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Number of nodes: " << countnode(root) << endl;
    cout << "Number of nodes (efficient approach): " << countnodes(root) << endl;

    return 0;
}