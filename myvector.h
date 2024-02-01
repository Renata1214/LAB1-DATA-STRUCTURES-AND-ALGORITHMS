/*
Questions:
Do i need to include the copy, move, etc constructors in this case? My aanswer: Yes because you will use them for push back and those kidn of things
*/

/*When Vector is statically allocated, its capacity is limited. To be able to change its
capacity as elements are added, the array must be dynamically allocated. Change
initial allocation (capacity) to the size 1, then for each push operation when a new
element is added to the container, check if the capacity is exceeded (compare
current size to capacity). If capacity is exceeded, double the capacity each time to
reallocate the data. Use a member variable size that stores the current size of the
vector, and gets updated each time an element is added/eliminated.*/

#include "payload.h" 
#include <string>
#pragma once 
using std::string;

struct Vector
{

// MEMBERS
static int VecCounter;
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

//Vector Size
int size () const;

int capacity () const ;

void print()const;

// //Debugging function
// Payload tryout () const ;

};
