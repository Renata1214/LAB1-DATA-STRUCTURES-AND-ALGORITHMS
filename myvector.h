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
static int VecCounter;
int IdVec;
Payload * Object1;
Payload * Object2;
Payload * Object3;
Payload * Object4;

//METHOD DECLARATION

// Constructor Default
Vector (string n1 = "",string n2 = "", string n3 = "",string n4 = "");//Ask how they managed to write born function before declaring it in payload.h

};
