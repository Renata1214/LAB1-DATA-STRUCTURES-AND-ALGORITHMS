#include <iostream>
#include "payload.h"
#include "myvector.h"
/*... your code here, containing Vector Struct member & method
definition*/
using std:: cout;

int Vector::Current_Size = 0;

Vector::Vector (){
    IdVec= Current_Size+1;
    for (int i=0;i<VecMax;i++){
        Payload* tempPayload = new Payload(); // Dynamically allocate a new Payload object
        Objects[i] = tempPayload;
        }
    }//Ask how they managed to write born function before declaring it in payload.h

    Vector:: ~ Vector (){
        for (int i = 0; i < VecMax; ++i) {
            if(Objects[i]!=nullptr){
                 Objects[i]->~Payload();// Deallocate the dynamically allocated objects
            }
    }
    }

    //Vector Push Back
       //The last element automatically created in the constructor 
        //will be lost sequentially as the push back function is called. However, once the push back function has been called 
        //enough times to fill the vector with user created payload objects, the function will not longer execute
    void Vector:: push_back(const string &name)
    {
        if(Current_Size<4){
            Objects[0]->~Payload();
            for(int i=0;i<VecMax-1;i++)
            {
                Objects[i]=Objects[i+1];
            }

        Payload* PushBack = new Payload(name); // Dynamically allocate a new Payload object
        Objects[3] = PushBack;
        ++Current_Size;
        }
    }
/*
String Literal to Non-const Reference: If the push_back function is declared as void push_back(string &name);,
 passing a string literal like "pear" to a non-const reference will result in an error. 
 String literals in C++ are of type const char*, and they cannot be bound to non-const references.
To resolve this, you can change the function declaration to accept a const reference to a string:
*/

//Vector Pop Back
    void Vector::pop_back() {
    if (Current_Size <= 0) {
        cout << "Vector is empty. No objects to pop_back." << "\n";
        return;
    }
    // Decrement the size before deleting the last object
    --Current_Size;
    // Check if the last object is dynamically allocated
    if (Objects[Current_Size] != nullptr) {
        Objects[Current_Size]->~Payload();// Deallocate the dynamically allocated object
        Objects[Current_Size] = nullptr; // Set the pointer to nullptr after deallocation
    }
}

//Vector Size
    int Vector::size () const {
        return Current_Size;
    };

