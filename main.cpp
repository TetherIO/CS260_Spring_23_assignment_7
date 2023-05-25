#include <iostream>
#include <string>

#include "hashtable.h"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
    Hashtable ht;

    // empty getSize test
    cout << "getSize() on empty hashtable: " << ht.getSize() << " (0 expected)" << endl;

    // empty default getCapacity test
    cout << "getCapacity() on empty hashtable: " << ht.getCapacity() << " (16 expected)" << endl;

    // empty find test
    cout << "find Joseph in empty hashtable: \"" << ht.find("Joseph") << "\" (\"\" is expected)" << endl;

    // simple add test
    cout << "add Joseph to empty hashtable: \"" << ht.add("Joseph") << "\" (\"0\" expected)" << endl;

    // getSize after one add test
    cout << "getSize() after one add: " << ht.getSize() << " (1 expected)" << endl;

    // simple find test
    cout << "find Joseph in hashtable containing just Joseph at the correct position: \"" << ht.find("Joseph") << "\" (\"Joseph\" is expected)" << endl;



    // overwrite add test
    cout << "add Jospeh to hashtable containing just Joseph at the correct position: \"" << ht.add("Jospeh") << "\" (\"-1\" expected)" << endl;
    // Test changed because data structure changed! cout << "add Jospeh to hashtable containing just Joseph at the correct position: \"" << ht.add("Jospeh") << "\" (\"0\" expected... we should add collision detection code to the add function...)" << endl;

    // overwritten find test
    cout << "find Joseph in hashtable containing just Jospeh at the correct position: \"" << ht.find("Joseph") << "\" (\"\" is expected)" << endl;

    // add additional values, fun!
    for(int i = 0; i < 100; ++i) {
        ht.add(std::to_string(i));
        cout << "add and find additional values (" << i << "): " << ht.find(std::to_string(i)) << endl;
    }
    for(int i = 0; i < 100; ++i) {
        cout << "add and find additional values (" << i << "): " << ht.find(std::to_string(i)) << endl;
    }

    // "complex" getSize test
    cout << "getSize() after many adds: " << ht.getSize() << " (16 expected)" << endl;

    // "complex" getCapacity
    cout << "getCapacity() after many adds: " << ht.getCapacity() << " (16 expected)" << endl;

    // test simple delete
    cout << "remove \"90\" from hashtable containing \"90\" which is in the table: \"" << ht.remove("90") << "\" (\"90\" expected)" << endl;
    cout << "find value (90): \"" << ht.find("90") << "\" (expected \"\")" << endl;

    // "complex" getSize test
    cout << "getSize() after many adds and one delete: " << ht.getSize() << " (15 expected)" << endl;

    Hashtable myTable(10);

    cout << "getSize() of new HashTable after initialized: " << myTable.getSize() << " (0 expected)" << endl;


    // Add some values that we know will cause collisions
    myTable.add("abc");
    myTable.add("bca");
    myTable.add("cab");
    myTable.add("bac");
    myTable.add("cba");
    myTable.add("acb");

    //the number of collisions that occurred
    cout << "Number of collisions: " << myTable.getCollisions() << endl;

    // the size of the hashtable
    cout << "Size of Hashtable: " << myTable.getSize() << endl;

    // convert int to double for #of collision, allows FPU/IEEE
    double collisionRatio = static_cast<double>(myTable.getCollisions()) / myTable.getSize();
    cout << "Collision Ratio: " << collisionRatio << endl;

    return 0;
}
