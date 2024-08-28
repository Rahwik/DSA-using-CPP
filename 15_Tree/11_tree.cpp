//maximum in a binary tree
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

int getMax(node* root)
{
    if(root==nullptr)
    {
        return INT_MIN;
    }
    else{
        return max(root->key, max(getMax(root->left), getMax(root->right)));
    }
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    int Maxz = getMax(root);
    cout << "Max in the binary tree: " << Maxz << endl;

    return 0;
}