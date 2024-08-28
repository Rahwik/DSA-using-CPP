//Children sum property
#include<iostream>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) {
        key = k;
        left = right = nullptr;
    }
};

bool isCSum(node* root)
{
    if(root==nullptr)
    {
        return true;
    }
    if(root->left==nullptr&&root->right==nullptr)
    {
        return true;
    }
    int sum=0;
    if(root->left!=nullptr)
    {
        sum+=root->left->key;
    }
    if(root->right!=nullptr)
    {
        sum+=root->right->key;
    }
    if(root->left==nullptr || root->right==nullptr) // added this condition
    {
        return false;
    }
    return (root->key==sum&&isCSum(root->left)&&isCSum(root->right));
}
int main()
{
    node* root = new node(10);
    root->left = new node(8);
    root->right = new node(2);
    if (isCSum(root))
        cout << "Children sum property is satisfied";
    else
        cout << "Children sum property is not satisfied";
    return 0;
}