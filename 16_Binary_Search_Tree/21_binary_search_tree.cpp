// Vertical traversal of Binary Tree
#include <iostream>
#include <map>
#include <queue>
#include <vector>
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

void vtraversal(node* root)
{
    map<int,vector<int>> map;
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto p = q.front();
        node* curr = p.first;
        int hd = p.second;
        map[hd].push_back(curr->key);
        q.pop();
        if(curr->left != nullptr)
        {
            q.push({curr->left, hd-1});
        }
        if(curr->right != nullptr)
        {
            q.push({curr->right, hd+1});
        }
    }
    // Print map contents line by line
    for(auto it = map.begin(); it != map.end(); it++)
    {
        for(int i = 0; i < it->second.size(); i++)
        {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);
    root->right->right->right = new node(9);
    vtraversal(root);
    return 0;
}