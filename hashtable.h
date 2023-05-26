#ifndef CS260_SPRING_23_ASSIGNMENT_7_HASHTABLE_H
#define CS260_SPRING_23_ASSIGNMENT_7_HASHTABLE_H

#include "binarytree.h" // Include the BinaryTree header file
#include <string>

class Hashtable {
public:
    // Constructor with an optional argument to set initial capacity
    Hashtable(int initialCapacity = 16);

    // Destructor
    ~Hashtable();

    // Add a new key to the hashtable
    void add(string newKey);

    // Check if a key exists in the hashtable
    bool find(string key);

    // Get the actual size of the hashtable
    int getSize();

    // Get the maximum capacity of the hashtable
    int getCapacity();

private:
    int size; // The actual number of objects added to hashtable
    int capacity; // The maximum possible objects in hashtable with currently allocated memory

    // Pointer to array of BinaryTrees. These are the hashtable's buckets.
    BinaryTree *buckets;

    // Private method to hash a key to get its index in the array
    int hash(string key);
};

#endif //CS260_SPRING_23_ASSIGNMENT_7_HASHTABLE_H
