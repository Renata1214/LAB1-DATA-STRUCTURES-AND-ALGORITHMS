
#include "payload.h" 
#include <string>
#pragma once 
using std::string;

struct Vector
{

// MEMBERS
int VecCounter;
static const int VecMax=4;
int IdVec;
int Capacity;
Payload *Objects;

//METHOD DECLARATION

// Constructor Default
Vector ();//Ask how they managed to write born function before declaring it in payload.h

~Vector ();

//Vector Push Back
void push_back (const Payload &name);

//Vector Pop Back
void pop_back ();

// //Vector Push front
void push_front (const Payload &name);

//Vector Pop Front
void pop_front ();

//vector Operator Overload.
Payload operator[](int i) ;

//Vector Size
int size () const;

int capacity () const ;

void print()const;


// //Debugging function
// Payload tryout () const ;

};
