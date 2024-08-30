//Construct a binary tree from inorder and preorder
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

int preindex = 0;

node* ctree(int in[], int pre[], int is, int ie) {
    if (is > ie) {
        return nullptr;
    }
    node* root = new node(pre[preindex++]);
    int inindex;
    for (int i = is; i <= ie; i++) {
        if (in[i] == root->key) {
            inindex = i;
            break;
        }
    }
    root->left = ctree(in, pre, is, inindex - 1);
    root->right = ctree(in, pre, inindex + 1, ie);
    return root;
}

node* buildTree(int in[], int pre[], int n) {
    return ctree(in, pre, 0, n - 1);
}

int main() {
    int in[] = {4, 2, 5, 1, 3};
    int pre[] = {1, 2, 4, 5, 3};
    int n = sizeof(in) / sizeof(in[0]);
    node* root = buildTree(in, pre, n);
    return 0;
}