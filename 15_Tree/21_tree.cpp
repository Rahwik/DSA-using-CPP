// LCA(Lowest Common Ancestor) of Binary Tree
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int key;
    node *left;
    node *right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

node *lca(node *root, int n1, int n2)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    if(root->key==n1||root->key==n2)
    {
        return root;
    }
    node* lca1=lca(root->left,n1,n2);
    node* lca2=lca(root->right,n1,n2);
    if(lca1!=nullptr&&lca2!=nullptr)
    {
        return root;
    }
    if(lca1!=nullptr)
    {
        return lca1;
    }
    else{
        return lca2;
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

    node *lca_node = lca(root, 4, 5);
    if (lca_node != nullptr)
    {
        cout << "LCA of 4 and 5 is " << lca_node->key << endl;
    }
    else
    {
        cout << "Keys are not present" << endl;
    }

    return 0;
}