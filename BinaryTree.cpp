#include "BinaryTree.h"

// helper function to insert a node into the binary tree
Node *BinaryTree::insertNode(Node *root, string key) {
    if (root == nullptr) {  // if tree is empty, assign a new node address to root
        root = new Node(key);
      //left right here
    } else if (key <= root->key) { //if incoming key is less than the root node key, insert into left branch
        root->left = insertNode(root->left, key);
    } else { // else, insert into right 
        root->right = insertNode(root->right, key);
    }
    return root;
}

//insert a key into the binary tree
void BinaryTree::insert(string key) {
    root = insertNode(root, key);
}


// helper function to find a node in the binary tree


// search a key in the binary tree
bool BinaryTree::find(string key) {
    return findNode(root, key);
}

