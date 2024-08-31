//Ceil in BST
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

node *ceil(node *root, int x)
{
    node *res = nullptr;
    while (root != nullptr)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (root->key < x)
        {
            root = root->right;
        }
        else{
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(3);
    root->left->right = new node(7);
    root->right->right = new node(18);

    int x = 12;
    node *res = ceil(root, x);
    if (res != nullptr)
        cout << "Ceil of " << x << " is " << res->key << endl;
    else
        cout << "Ceil of " << x << " does not exist" << endl;

    return 0;
}