//Is the vector supposed to have a constant size also in exercise 2 ? Because otherwise the push back and pop back would lead for information to be los right?
#include <iostream>
#include "payload.h"
#include "myvector.h"

using std:: cout;

int Vector:: VecCounter =0;

Vector::Vector (){
    IdVec= VecCounter+1;
    Capacity=1;
    Objects = new Payload [Capacity];
    // ++VecCounter;
        } //Ask how they managed to write born function before declaring it in payload.h

    Vector:: ~ Vector (){ delete[] Objects;}

    void Vector:: push_back(const Payload &name)
    {
        if(Capacity<=VecCounter){
            Capacity= 2*Capacity;
            Payload* temp = new Payload[Capacity];
                for (int i = 0; i < VecCounter; ++i) {
                       temp[i] = Objects[i]; } 
                    // Deallocate the old array
                    delete[] Objects;
                     Objects = temp; 
            }
            Objects[VecCounter] = name; //Correct Index because the VecCounter is later increased
            ++VecCounter;
     }

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


//Debugging Function
Payload Vector::tryout () const {
    return Objects[VecCounter];
};

