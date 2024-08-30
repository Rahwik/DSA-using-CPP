//Diameter of a binary tree
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

int height(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    else{
        return 1+max(height(root->left), height(root->right));
    }
}

//Naive solution
int diameter(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int d1=1+height(root->left)+height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);
    return max(d1,max(d2,d3));
}

//Better approach
int res=0;
int height1(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int lh=height1(root->left);
    int rh=height1(root->right);
    res=max(res, lh+rh+1);
    return 1+max(lh,rh);
}

int diameterOptimized(node* root)
{
    height1(root);
    return res;
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    int diameter = diameterOptimized(root);
    cout << "Diameter of the binary tree: " << diameter << endl;

    return 0;
}