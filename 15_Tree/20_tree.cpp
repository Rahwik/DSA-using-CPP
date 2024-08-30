// Tree Traversal in spiral form
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

void printspiral(node* root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<node*> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node* curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr->key);
            }
            else {
                cout << curr->key << " ";
            }
            if (curr->left != nullptr)
            {
                q.push(curr->left);
            }
            if (curr->right != nullptr)
            {
                q.push(curr->right);
            }
        }
        if (reverse)
        {
            while (!s.empty())
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        cout << endl;
    }
}
int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    printspiral(root);
    return 0;
}