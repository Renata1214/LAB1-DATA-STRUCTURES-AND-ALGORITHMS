#include <iostream>
#include "payload.h"

using std:: cout;

// Define a struct for the vector
struct Vector {
    int capacity1; // Capacity of the vector
    int size1;     // Current size of the vector
    Payload* elements; // Array to hold elements

    Vector() : capacity1(1), size1(0) {
        elements = new Payload[capacity1];
    }

    // Destructor to deallocate memory
    ~Vector() {
        delete[] elements;
    }

    // Method to add an element to the end of the vector
    void push_back(const Payload& payload) {
        if (size1 >= capacity1) {
            // Double the capacity
            capacity1 *= 2;
            Payload* new_elements = new Payload[capacity1];
            // Copy existing elements to the new array
            for (int i = 0; i < size1; ++i) {
                new_elements[i] = elements[i];
            }
            // Delete the old array
            delete[] elements;
            // Point to the new array
            elements = new_elements;
        }
        elements[size1++] = payload;
    }

    // Method to remove the last element from the vector
    void pop_back() {
        if (size1 > 0) {
            --size1;
        }
    }

    // Method to return the current size of the vector
    int size() const {
        return size1;
    }

    // Method to return the current capacity of the vector
    int capacity() const {
        return capacity1;
    }

    // Method to print the elements of the vector
    void print() const {
        for (int i = 0; i < size1; ++i) {
            elements[i].print(); // Assuming Payload has a print() method
            cout << " ";
        }
    }
};

int main()
{
 auto showVector = [](const Vector & v)
 {
 cout << "Vector size/capacity: " << v.size() << '/' <<
v.capacity() << '\n';
 };
 {
 Vector v;
 v.push_back("apple");
showVector(v);
// cout << v.tryout().tryout1()<< '\n';
v.push_back("pear");
v.push_back("banana");
showVector(v);
v.pop_back();
showVector(v);
 }
return 0;
}
