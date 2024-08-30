//BST Deletion
#include <iostream>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

node* getSuccessor(node* root) {
    node* current = root->right;
    while (current != nullptr && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

node* delnode(node* root, int x) {
    if (root == nullptr) {
        return root;
    }
    if (root->key > x) {
        root->left = delnode(root->left, x);
    } else if (root->key < x) {
        root->right = delnode(root->right, x);
    } else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        } else {
            node* succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delnode(root->right, succ->key);
        }
    }
    return root;
}

class BinaryTree {
public:
    node* root;
    BinaryTree() : root(nullptr) {}

    void insert(int x) {
        root = insertUtil(root, x);
    }

    node* insertUtil(node* root, int x) {
        if (root == nullptr) {
            return new node(x);
        }
        if (x < root->key) {
            root->left = insertUtil(root->left, x);
        } else {
            root->right = insertUtil(root->right, x);
        }
        return root;
    }

    void deleteNode(int x) {
        root = delnode(root, x);
    }

    void printTree(node* root) {
        if (root == nullptr) {
            return;
        }
        cout << root->key << " ";
        printTree(root->left);
        printTree(root->right);
    }
};

int main() {
    BinaryTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);

    tree.deleteNode(20);

    cout << "Tree after deletion: ";
    tree.printTree(tree.root);
    cout << endl;
    return 0;
}