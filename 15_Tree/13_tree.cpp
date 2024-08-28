// Print left view of binary tree
#include <iostream>
#include <queue>
using namespace std;

// Iterative method
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

void printLeft(node* root) {
    if (root == nullptr) {
        return;
    }
    queue<node*>q;
    q.push(root);
    while(q.empty()==true)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node* curr=q.front();
            q.pop();
            if(i==0)
            {
                cout<<(curr->key)<<" ";
            }
            if(curr->left!=nullptr)
            {
                q.push(curr->left);
            }
            if(curr->right!=nullptr)
            {
                q.push(curr->right);
            }
        }
    }
    
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printLeft(root);

    return 0;
}