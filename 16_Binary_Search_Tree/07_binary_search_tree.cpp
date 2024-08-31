//Self balancing BST
// A self-balancing binary search tree (BST) is a type of data structure that automatically adjusts its height to maintain a balance between the left and right subtrees. This ensures that search, insertion, and deletion operations are performed efficiently, with an average time complexity of O(log n).

// In a self-balancing BST, each node has a balance factor, which is the difference between the height of its left subtree and the height of its right subtree. The balance factor is used to determine whether the tree is balanced or not. If the balance factor is greater than 1 or less than -1, the tree is unbalanced and needs to be rebalanced.

// There are several types of self-balancing BSTs, including:

// *   AVL trees: These trees use a balance factor to determine whether the tree is balanced or not. If the balance factor is greater than 1 or less than -1, the tree is unbalanced and needs to be rebalanced.
// *   Red-black trees: These trees use a color-coding system to maintain balance. Each node is either red or black, and the tree is self-balancing if the root node is black and all leaf nodes are red.
// *   Splay trees: These trees use a splaying algorithm to move frequently accessed nodes to the root of the tree, which helps to maintain balance.

// Self-balancing BSTs have several advantages over regular BSTs, including:

// *   Efficient search, insertion, and deletion operations: Self-balancing BSTs ensure that these operations are performed in O(log n) time, making them suitable for large datasets.
// *   Good cache performance: Self-balancing BSTs tend to keep frequently accessed nodes near the root of the tree, which can improve cache performance.

// Examples of self-balancing BSTs include:

// *   Database indexing: Self-balancing BSTs can be used to index large datasets in databases, allowing for efficient search, insertion, and deletion operations.
// *   File systems: Self-balancing BSTs can be used to manage file metadata, such as file names and locations, in file systems.
// *   Compilers: Self-balancing BSTs can be used to manage symbol tables, which are used to keep track of variables and their declarations in source code.

// Overall, self-balancing BSTs are an important data structure in computer science, and are widely used in many applications where efficient search, insertion, and deletion operations are critical.**Rotations in Self-Balancing BSTs**

// In self-balancing BSTs, rotations are used to maintain balance after insertion or deletion operations. There are four types of rotations:

// *   **Left-Left Rotation (LL Rotation)**

//     *   This rotation is performed when a node is inserted in the left subtree of the left child of an unbalanced node.
//     *   The left child of the unbalanced node becomes the new root node.
//     *   The unbalanced node becomes the right child of the new root node.
//     *   The right child of the new root node becomes the left child of the unbalanced node.

//     Example:

//     Before Rotation:

//         4
//        /
//       2
//      /
//     1

//     After Rotation:

//       2
//      / \
//     1   4

// *   **Right-Right Rotation (RR Rotation)**

//     *   This rotation is performed when a node is inserted in the right subtree of the right child of an unbalanced node.
//     *   The right child of the unbalanced node becomes the new root node.
//     *   The unbalanced node becomes the left child of the new root node.
//     *   The left child of the new root node becomes the right child of the unbalanced node.

//     Example:

//     Before Rotation:

//     2
//      \
//       4
//        \
//         5

//     After Rotation:

//       4
//      / \
//     2   5

// *   **Left-Right Rotation (LR Rotation)**

//     *   This rotation is performed when a node is inserted in the right subtree of the left child of an unbalanced node.
//     *   The right child of the left child of the unbalanced node becomes the new root node.
//     *   The left child of the unbalanced node becomes the left child of the new root node.
//     *   The unbalanced node becomes the right child of the new root node.

//     Example:

//     Before Rotation:

//     4
//    /
//   2
//    \
//     3

//     After Rotation:

//       3
//      / \
//     2   4

// *   **Right-Left Rotation (RL Rotation)**

//     *   This rotation is performed when a node is inserted in the left subtree of the right child of an unbalanced node.
//     *   The left child of the right child of the unbalanced node becomes the new root node.
//     *   The right child of the unbalanced node becomes the right child of the new root node.
//     *   The unbalanced node becomes the left child of the new root node.

//     Example:

//     Before Rotation:

//     2
//      \
//       4
//      /
//     3

//     After Rotation:

//       3
//      / \
//     2   4