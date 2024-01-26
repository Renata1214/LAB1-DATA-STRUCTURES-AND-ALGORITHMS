/*
Questions:
Do i need to include the copy, move, etc constructors in this case? My aanswer: Yes because you will use them for push back and those kidn of things
*/

#include "payload.h" 
#include <string>
using std::string;

struct Vector
{
//... your code here, containing member & method declaration

// MEMBERS
static int VecCounter;
string name;
int IdVec;

//METHOD DECLARATION

// Constructor Default
Vector (string n = " ") : name(n), IdVec(VecCounter++) { }

};
