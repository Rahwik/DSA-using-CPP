// AVL TREE
// Balance Factor of AVL Tree

// The balance factor of an AVL tree is a measure of how balanced the tree is. It is calculated by subtracting the height of the right subtree from the height of the left subtree.

// Balance Factor = Height of Left Subtree - Height of Right Subtree

// For example, consider the following AVL tree:

//        4
//      /   \
//     2     6
//    / \   / \
//   1   3 5   7

// The balance factor of the root node (4) is:

// Balance Factor = Height of Left Subtree (2) - Height of Right Subtree (2) = 0

// This means that the tree is perfectly balanced.

// Now, let's consider an example where the tree is not balanced:

//        4
//      /   \
//     2     6
//    / \
//   1   3
//        \
//         5

// The balance factor of the root node (4) is:

// Balance Factor = Height of Left Subtree (3) - Height of Right Subtree (1) = 2

// This means that the tree is not balanced, and we need to perform rotations to balance it.

// In an AVL tree, the balance factor of every node should be between -1 and 1. If the balance factor of a node is greater than 1 or less than -1, the tree is not balanced, and we need to perform rotations to balance it.

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node(int val) {
        value = val;
        left = right = nullptr;
    }
};

class AVLTree {
public:
    Node* root;
    Node* add(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        if (value < root->value) {
            root->left = add(root->left, value);
        } else if (value > root->value) {
            root->right = add(root->right, value);
        }
        return root;
    }

    Node* rotR(Node* node) {
        Node* temp = node->left;
        Node* temp2 = temp->right;
        temp->right = node;
        node->left = temp2;
        return temp;
    }

    Node* rotL(Node* node) {
        Node* temp = node->right;
        Node* temp2 = temp->left;
        temp->left = node;
        node->right = temp2;
        return temp;
    }

    int bal(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return height(node->left) - height(node->right);
    }

    int height(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return max(height(node->left), height(node->right)) + 1;
    }

    Node* rebal(Node* node) {
        int balanceFactor = bal(node);
        if (balanceFactor > 1) {
            if (bal(node->left) >= 0) {
                return rotR(node);
            } else {
                node->left = rotL(node->left);
                return rotR(node);
            }
        }
        if (balanceFactor < -1) {
            if (bal(node->right) <= 0) {
                return rotL(node);
            } else {
                node->right = rotR(node->right);
                return rotL(node);
            }
        }
        return node;
    }

    Node* addAndRebal(Node* node, int value) {
        node = add(node, value);
        node = rebal(node);
        return node;
    }
};

int main() {
    AVLTree tree;
    tree.root = nullptr;
    tree.root = tree.addAndRebal(tree.root, 4);
    tree.root = tree.addAndRebal(tree.root, 2);
    tree.root = tree.addAndRebal(tree.root, 6);
    tree.root = tree.addAndRebal(tree.root, 1);
    tree.root = tree.addAndRebal(tree.root, 3);
    tree.root = tree.addAndRebal(tree.root, 5);
    tree.root = tree.addAndRebal(tree.root, 7);
    return 0;
}