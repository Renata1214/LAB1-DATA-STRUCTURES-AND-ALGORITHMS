//Is the vector supposed to have a constant size also in exercise 2 ? Because otherwise the push back and pop back would lead for information to be los right?
#include <iostream>
#include "payload.h"
#include "myvector.h"
/*... your code here, containing Vector Struct member & method
definition*/
using std:: cout;

int Vector:: VecCounter =0;

Vector::Vector (){
    IdVec= VecCounter+1;
    Capacity=1;
    Objects = new Payload [Capacity];
    // ++VecCounter;
        } //Ask how they managed to write born function before declaring it in payload.h

    Vector:: ~ Vector (){
        // for (int i = 0; i < VecCounter; ++i) {
        //     if(Objects[i] !=nullptr){
        //          Objects[i].~Payload();// Deallocate the dynamically allocated objects
          //  }
    //}
    delete[] Objects;
    }

    //Vector Push Back
       //The last element automatically created in the constructor 
        //will be lost sequentially as the push back function is called. However, once the push back function has been called 
        //enough times to fill the vector with user created payload objects, the function will not longer execute
    void Vector:: push_back(const Payload &name)
    {
        if(Capacity<=VecCounter){
            Capacity= 2*Capacity;
            // Payload* temp = new Payload[Capacity];
            //     for (int i = 0; i < VecCounter; ++i) {
            //          temp[i] = Objects[i]; } 
            // Objects = temp; 
            }

            Objects[VecCounter] = name; //Correct Index because the VecCounter is later increased
            ++VecCounter;
        }
/*
String Literal to Non-const Reference: If the push_back function is declared as void push_back(string &name);,
 passing a string literal like "pear" to a non-const reference will result in an error. 
 String literals in C++ are of type const char*, and they cannot be bound to non-const references.
To resolve this, you can change the function declaration to accept a const reference to a string:
*/

//Vector Pop Back
    void Vector::pop_back() {
    if (VecCounter <= 0) {
        cout << "Vector is empty. No objects to pop_back." << "\n";}
    else{
    --VecCounter;
    }
}

//Vector Size
    int Vector::size () const { return VecCounter;};

//Vector Capacity
int Vector::capacity () const { return Capacity;}

