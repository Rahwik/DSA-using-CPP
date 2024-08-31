// RED Black Tree
//  A Red-Black tree is a self-balancing binary search tree data structure with a guarantee of O(log n) time for search, insert, and delete operations. It is a variation of B-tree data structure and satisfies the following properties:

// 1. Each node is either red or black.
// 2. The root node is black.
// 3. All leaves are black.
// 4. If a node is red, both its children must be black.
// 5. For any node, all paths from the node to its descendant leaves contain the same number of black nodes.

// Visual Example:

//       7 (black)
//      /   \
//    3 (red)   18 (black)
//   /  \      /   \
// 2 (black) 5 (black) 15 (red) 20 (black)
//           /  \      /  \
//        4 (red) 6 (red) 12 (black) 17 (black)

// In the above example, the root node 7 is black, and all leaves are black. Node 3 is red, and both its children (2 and 5) are black. Node 18 is black, and its children (15 and 20) are red and black, respectively. All paths from the root node to its descendant leaves contain the same number of black nodes (2).

#include <iostream>
using namespace std;

enum Color
{
    RED,
    BLACK
};

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node *parent;
    Color color;

    Node(int val)
    {
        value = val;
        left = right = parent = nullptr;
        color = RED;
    }
};

void insertNode(Node *&root, int value)
{

    Node *newNode = new Node(value);

    if (root == nullptr)
    {
        root = newNode;
        root->color = BLACK;
        return;
    }

    Node *current = root;
    while (true)
    {
        if (value < current->value)
        {
            if (current->left == nullptr)
            {
                current->left = newNode;
                newNode->parent = current;
                break;
            }
            current = current->left;
        }
        else
        {
            if (current->right == nullptr)
            {
                current->right = newNode;
                newNode->parent = current;
                break;
            }
            current = current->right;
        }
    }

    balanceTree(root, newNode);
}

void balanceTree(Node *&root, Node *node)
{

    while (node->parent != nullptr && node->parent->color == RED)
    {
        if (node->parent == node->parent->parent->left)
        {
            Node *uncle = node->parent->parent->right;
            if (uncle != nullptr && uncle->color == RED)
            {
                node->parent->color = BLACK;
                uncle->color = BLACK;
                node->parent->parent->color = RED;
                node = node->parent->parent;
            }
            else
            {
                if (node == node->parent->right)
                {
                    node = node->parent;
                    rotateLeft(root, node);
                }
                node->parent->color = BLACK;
                node->parent->parent->color = RED;
                rotateRight(root, node->parent->parent);
            }
        }
        else
        {
            Node *uncle = node->parent->parent->left;
            if (uncle != nullptr && uncle->color == RED)
            {
                node->parent->color = BLACK;
                uncle->color = BLACK;
                node->parent->parent->color = RED;
                node = node->parent->parent;
            }
            else
            {
                if (node == node->parent->left)
                {
                    node = node->parent;
                    rotateRight(root, node);
                }
                node->parent->color = BLACK;
                node->parent->parent->color = RED;
                rotateLeft(root, node->parent->parent);
            }
        }
    }
    root->color = BLACK;
}

void rotateLeft(Node *&root, Node *node)
{
    Node *temp = node->right;
    node->right = temp->left;
    if (temp->left != nullptr)
    {
        temp->left->parent = node;
    }
    temp->parent = node->parent;
    if (node->parent == nullptr)
    {
        root = temp;
    }
    else if (node == node->parent->left)
    {
        node->parent->left = temp;
    }
    else
    {
        node->parent->right = temp;
    }
    temp->left = node;
    node->parent = temp;
}

void rotateRight(Node *&root, Node *node)
{
    Node *temp = node->left;
    node->left = temp->right;
    if (temp->right != nullptr)
    {
        temp->right->parent = node;
    }
    temp->parent = node->parent;
    if (node->parent == nullptr)
    {
        root = temp;
    }
    else if (node == node->parent->right)
    {
        node->parent->right = temp;
    }
    else
    {
        node->parent->left = temp;
    }
    temp->right = node;
    node->parent = temp;
}

void printTree(Node *root)
{
    if (root != nullptr)
    {
        printTree(root->left);
        cout << root->value << " ";
        printTree(root->right);
    }
}

int main()
{
    Node *root = nullptr;

    insertNode(root, 7);
    insertNode(root, 3);
    insertNode(root, 18);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 20);
    insertNode(root, 4);
    insertNode(root, 6);
    insertNode(root, 12);
    insertNode(root, 17);

    printTree(root);

    return 0;
}
