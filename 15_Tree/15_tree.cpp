// check for balanced binary tree
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

int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

// Naive solution
bool isbalance(node *root)
{
    if (root == nullptr)
    {
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh - rh) <= 1 && isbalance(root->left) && isbalance(root->right));
}

// Efficient Solution
bool isbalanced(node* root)
{
    if (root == nullptr)
    {
        return true;
    }
    int lh = isbalanced(root->left);
    if (lh == -1)
    {
        return false;
    }
    int rh = isbalanced(root->right);
    if (rh == -1)
    {
        return false;
    }
    if (abs(lh - rh) > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "Is tree balanced? " << (isbalanced(root) ? "Yes" : "No") << endl;

    return 0;
}