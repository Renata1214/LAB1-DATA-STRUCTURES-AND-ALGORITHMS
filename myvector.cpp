//Is the vector supposed to have a constant size also in exercise 2 ? Because otherwise the push back and pop back would lead for information to be los right?
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
                delete Objects[i]; // Deallocate the dynamically allocated objects
            }
    }
    }

    //Vector Push Back
       //The last element automatically created in the constructor 
        //will be lost sequentially as the push back function is called. However, once the push back function has been called 
        //enough times to fill the vector with user created payload objects, the function will not longer execute
    void Vector:: push_back(const string &name)
    {
        if(Current_Size>4){
            for(int i=0;i<VecMax-1;i++){
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
    void Vector::pop_back (){
       for (int i=3; i>=0;i--){
        if(Objects[i]!=nullptr){
            Objects[i]=nullptr;
            --Current_Size;
            break;
        }
        else {
            cout << "No more objects to pop_back" << std::endl;
        }
       }
    }

//Vector Size
    const int Vector::size (){
        return Current_Size;
    };

