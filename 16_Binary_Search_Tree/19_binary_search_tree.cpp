// Pair sum with given BST
#include <iostream>
#include <climits>
#include <unordered_set>

using namespace std;

class node {
public:
    int key;
    node *left, *right;
    node(int x) {
        key = x;
        left = right = nullptr;
    }
};

bool ispairsum(node* root, int sum, unordered_set<int>& s) {
    if (root == nullptr) {
        return false;
    }

    if (s.find(sum - root->key) != s.end()) {
        return true;
    }

    s.insert(root->key);

    return ispairsum(root->left, sum, s) || ispairsum(root->right, sum, s);
}
int main() {
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(12);
    root->right->right = new node(24);

    unordered_set<int> s;
    int sum = 27;
    if (ispairsum(root, sum, s)) {
        cout << "Pair with sum " << sum << " exists" << endl;
    } else {
        cout << "Pair with sum " << sum << " does not exist" << endl;
    }

    return 0;
}