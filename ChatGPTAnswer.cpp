// Define a struct for the vector
struct Vector {
    int capacity; // Capacity of the vector
    int size;     // Current size of the vector
    Payload* elements; // Array to hold elements

    Vector() : capacity(1), size(0) {
        elements = new Payload[capacity];
    }

    // Destructor to deallocate memory
    ~Vector() {
        delete[] elements;
    }

    // Method to add an element to the end of the vector
    void push_back(const Payload& payload) {
        if (size >= capacity) {
            // Double the capacity
            capacity *= 2;
            Payload* new_elements = new Payload[capacity];
            // Copy existing elements to the new array
            for (int i = 0; i < size; ++i) {
                new_elements[i] = elements[i];
            }
            // Delete the old array
            delete[] elements;
            // Point to the new array
            elements = new_elements;
        }
        elements[size++] = payload;
    }

    // Method to remove the last element from the vector
    void pop_back() {
        if (size > 0) {
            --size;
        }
    }

    // Method to return the current size of the vector
    int get_size() const {
        return size;
    }

    // Method to return the current capacity of the vector
    int get_capacity() const {
        return capacity;
    }

    // Method to print the elements of the vector
    void print() const {
        for (int i = 0; i < size; ++i) {
            elements[i].print(); // Assuming Payload has a print() method
            cout << " ";
        }
    }
};
