//Top View of Binary Tree
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

void createMap(node* root) {
    if (root == nullptr) return;

    queue<node*> q;
    q.push(root);
    map<int, int> mp;
    int level = 0;

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            node* curr = q.front();
            q.pop();
            mp[level] = curr->key;
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        level++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->second << " ";
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
    createMap(root);
    return 0;
}
