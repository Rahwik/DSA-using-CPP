// Vertical Sum in a Binary tree
#include <iostream>
#include <map>
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

void vsumr(node *root, int hd, map<int, int>& mp)
{
    if (root == nullptr)
    {
        return;
    }
    vsumr(root->left, hd - 1, mp);
    mp[hd] += root->key;
    vsumr(root->right, hd + 1, mp);
}

void vsum(node *root)
{
    map<int, int> mp;
    vsumr(root, 0, mp);
    for (auto sum : mp)
    {
        cout << sum.second << endl;
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Following are the values of vertical sums with the positions of the nodes on inorder traversal\n";
    vsum(root);

    return 0;
}