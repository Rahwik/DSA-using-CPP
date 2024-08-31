//Bottom view of binary tree
#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

class node
{
public:
    int k;
    node *l, *r;
    node(int x)
    {
        k = x;
        l = r = nullptr;
    }
};

void bottomView(node *root)
{
    if (!root) return;

    map<int, int> m;
    queue<pair<node*, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        m[p.second] = p.first->k;

        if (p.first->l) q.push({p.first->l, p.second - 1});
        if (p.first->r) q.push({p.first->r, p.second + 1});
    }

    for (auto &x : m) cout << x.second << " ";
}

int main()
{
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->l->r = new node(5);
    root->r->l = new node(6);
    root->r->r = new node(7);

    bottomView(root);
    return 0;
}