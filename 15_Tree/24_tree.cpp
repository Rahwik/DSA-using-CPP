//Serialize and Deserialize a Binary Tree
#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int key;
    node* left;
    node* right;
    node(int k) : key(k), left(nullptr), right(nullptr) {}
};

//Serialize:
const int Empty = -1;
void serialize(node* root, vector<int>& arr) {
    if (root == nullptr) {
        arr.push_back(Empty);
        return;
    }
    arr.push_back(root->key);
    serialize(root->left, arr);
    serialize(root->right, arr);
}

//Deserialize:
const int Empty = -1;
int index = 0;
node* deserialize(vector<int>& arr) {
    if (index == arr.size()) {
        return nullptr;
    }
    int val = arr[index];
    index++;
    if (val == Empty) {
        return nullptr;
    }
    node* root = new node(val);
    root->left = deserialize(arr);
    root->right = deserialize(arr);
    return root;
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    vector<int> arr;
    serialize(root, arr);

    node* deserializedRoot = deserialize(arr);

    return 0;
}