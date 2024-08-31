// Check for BST
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

bool isBST(node* root, int& prev) {
    if (root == nullptr) {
        return true;
    }
    if (!isBST(root->left, prev)) {
        return false;
    }
    if (root->key <= prev) {
        return false;
    }
    prev = root->key;
    return isBST(root->right, prev);
}

bool checkBST(node* root) {
    int prev = INT_MIN;
    return isBST(root, prev);
}

int main() {
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);

    if (checkBST(root)) {
        cout << "Is BST" << endl;
    } else {
        cout << "Not a BST" << endl;
    }

    return 0;
}