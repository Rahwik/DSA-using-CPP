//Size of Binary tree
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

int getSize(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    else{
        return 1+getSize(root->left)+getSize(root->right);
    }
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    int size = getSize(root);
    cout << "Size of the binary tree: " << size << endl;

    return 0;
}