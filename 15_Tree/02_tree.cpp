//inorder
#include<iostream>
using namespace std;

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

void inorder(node* root)
{
    if(root != nullptr)
    {
        inorder(root->left);
        cout << (root->key) << " ";
        inorder(root->right);
    }
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    inorder(root);

    return 0;
}