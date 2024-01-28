/*
Questions:
Do i need to include the copy, move, etc constructors in this case? My aanswer: Yes because you will use them for push back and those kidn of things
*/

#include "payload.h" 
#include <string>
#pragma once 
using std::string;


struct Vector
{
//... your code here, containing member & method declaration

// MEMBERS
static int Current_Size;
static const int VecMax=4;
int IdVec;
Payload * Objects [VecMax];

//METHOD DECLARATION

// Constructor Default
Vector ();//Ask how they managed to write born function before declaring it in payload.h

~Vector ();

//Vector Push Back
void push_back (const string &name);

//Vector Pop Back
void pop_back ();

//Vector Size
const int size ();

};
