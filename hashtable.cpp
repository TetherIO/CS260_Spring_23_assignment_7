#include "hashtable.h"

// Initialize hashtable with a certain capacity -- buckets will be a binary trees.
Hashtable::Hashtable(int initialSize) {
    size = 0;
    capacity = initialSize;
    buckets = new BinaryTree[capacity]; // allocate memory for BT array of size 'capacity'
}

// Destructor for allocated memory


// Compute a hash value for the input key (hash function)


// Add a key to the hash table


// check if a key exists in hash table


//=get the number of keys currently stored


// get the current capacity
