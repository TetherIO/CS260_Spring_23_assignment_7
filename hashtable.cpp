#include "hashtable.h"

// Initialize hashtable with a givven capacity -- buckets will be a binary trees.
Hashtable::Hashtable(int initialSize) {
    size = 0;
    capacity = initialSize;
    buckets = new BinaryTree[capacity]; // allocate memory for BT array of size 'capacity'
}

// Destructor for allocated memory
Hashtable::~Hashtable() {
    delete[] buckets; // Deallocate memory for the BinaryTree array
}

// Compute a hash value for the input key (hash function)
int Hashtable::hash(string key) {
    int result = 0;
    for (auto character: key) {
        result += character; // add ASCII values of characters in the key
    }
    return result % capacity; // 'modulo by' capacity to check that the hash value fits within array bounds
}

// Add a key to the hash table
void Hashtable::add(string newKey) {
    int index = hash(newKey); // computation of hash value to determine the index (bucket) for this key
    buckets[index].insert(newKey); // Insert newKey into the BT at the computed bucket
    size++;
}

// check if a key exists in hash table
bool Hashtable::find(string key) {
    int index = hash(key); //  hash value to determine the index (bucket) for this key
    return buckets[index].find(key); // Check if the key exists at the bucket
}

//=get the number of keys currently stored
int Hashtable::getSize() {
    return size;
}

// get the current capacity
int Hashtable::getCapacity() {
    return capacity;
}
