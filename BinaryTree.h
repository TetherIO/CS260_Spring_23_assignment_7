#ifndef CS260_SPRING_23_ASSIGNMENT_7_BINARYTREE_H
#define CS260_SPRING_23_ASSIGNMENT_7_BINARYTREE_H


#include <string>

using std::string;
// Node class for BinaryTree. Each Node contains a key, and pointers to left and right children.
struct Node {
    string key;
    Node *left;
    Node *right;

    // constructor for Node, takes a string key and initializes left and right children pointers to nullptr.
    Node(string key) : key(key), left(nullptr), right(nullptr) {}
};

//binaryTree class for handling collisions in Hashtable. Each bucket in the Hashtable will contain a BinaryTree.
class BinaryTree {
public:
    Node *root; // pointer to the root node of the BinaryTree

      //constructor for BinaryTree, initializes root to nullptr


#endif //CS260_SPRING_23_ASSIGNMENT_7_BINARYTREE_H
