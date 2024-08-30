//BST Insert
#include <iostream>
using namespace std;

class node
{
public:
    int key;
    node *left, *right;
    node(int x)
    {
        key = x;
        left = right = nullptr;
    }
};
node* insert(node* root,int x){
    if(root==nullptr){
        return new node(x);
    }
    else if(root->key<x){
        root->right=insert(root->right,x);
    }
    else if(root->key>x)
    {
        root->left=insert(root->left,x);
    }
    return root;

}
int main()
{
    node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    return 0;
}