// search in BST
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

bool search(node *root, int x)
{
    while (root != nullptr)
    {
        if (root->key == x)
        {
            return true;
        }
        else if (root->key < x)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return false;
}

int main()
{
    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);

    int x = 40;
    if (search(root, x))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}