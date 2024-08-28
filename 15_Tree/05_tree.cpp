//height of the binary tree
#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = nullptr;
    }
};

int height(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    int h=height(root);
    cout<<"height of the tree is : "<<h<<endl;
    return 0;
}