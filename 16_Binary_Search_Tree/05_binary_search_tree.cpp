// BST floor in BST C++
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
node *floor(node *root, int x)
{
    node *res = nullptr;
    while (root != nullptr)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (root->key > x)
        {
            root=root->key;
        }
        else{
            res=root;
            root=root->left;
        }
    }
    return res;
}
int main() {
    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);

    int x = 65;
    node *res = floor(root, x);
    if (res != nullptr) {
        cout << "Floor of " << x << " is " << res->key << endl;
    } else {
        cout << "Floor of " << x << " does not exist" << endl;
    }

    return 0;
}