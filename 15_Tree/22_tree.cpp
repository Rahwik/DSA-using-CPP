//Burn a binary Tree from leaf
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
int maxDistance=0;
int burnTree(node* root, int leaf, int &dist) {
    if (root == nullptr) {
        return 0;
    }
    if (root->key == leaf) {
        dist = 0;
        return 0;
    }
    int ldist = -1, rdist = -1;
    int lh = burnTree(root->left, leaf, ldist);
    int rh = burnTree(root->right, leaf, rdist);
    if (ldist != -1) {
        dist = ldist + 1;
        maxDistance = max(maxDistance, dist + rh);
    } else if (rdist != -1) {
        dist = rdist + 1;
        maxDistance = max(maxDistance, dist + lh);
    }
    return max(lh, rh) + 1;
}
int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    int dist = -1;
    burnTree(root, 5, dist);
    cout << "Maximum distance from leaf node 5 to all other nodes is: " << maxDistance << endl;

    return 0;
}