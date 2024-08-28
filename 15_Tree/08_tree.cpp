//level order traversal line by line
//naive method
#include <iostream>
#include <queue>
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

void printlevel(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int levelSize = q.size();
        for(int i=0; i<levelSize; i++)
        {
            node* curr=q.front();
            q.pop();
            cout<<(curr->key)<<" ";
            if(curr->left!=nullptr)
            {
                q.push(curr->left);
            }
            if(curr->right!=nullptr)
            {
                q.push(curr->right);
            }
        }
        cout<<"\n";
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printlevel(root); 

    return 0;
}
