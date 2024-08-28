// print nodes at k distance
#include <iostream>
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

void printkthdist(node* root, int k)
{
    if(root == nullptr)
    {
        return;
    }
    if(k == 0)
    {
        cout << (root->key) << " ";
    }
    else{
        printkthdist(root->left, k-1);
        printkthdist(root->right, k-1);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    int k = 2;
    printkthdist(root, k);

    return 0;
}