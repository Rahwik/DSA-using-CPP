//Find the K-th Smallest 
#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node(int x) {
        key = x;
        left = right = nullptr;
    }
};

//Naive solution :
void printKthSmallest(Node* root, int k) {
    static int count = 0;

    if (root != nullptr) {
        printKthSmallest(root->left, k);

        count++;
        if (count == k) {
            cout << "K-th smallest element is: " << root->key << endl;
            return;
        }

        printKthSmallest(root->right, k);
    }
}

//Efficient Solution :
int countNodes(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

Node* kthSmallestElement(Node* root, int k) {
    if (root == nullptr)
        return nullptr;

    int lcount = countNodes(root->left);
    if (k == lcount + 1)
        return root;
    if (k < lcount + 1)
        return kthSmallestElement(root->left, k);
    return kthSmallestElement(root->right, k - lcount - 1);
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);

    int k = 5;
    printKthSmallest(root, k);

    return 0;
}