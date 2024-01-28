//Ask about the syntax of lambda functions vs pass by value functions auto showVector = [](const Vector & v) like [] vs ()
//Passin by capturing the value vs passing as an argument of the function

#include <iostream>
#include "myvector.h"
using std::cout;
int main()
{
 auto showVector = [](const Vector & v)
 {
 cout << "Vector size: " << v.size() << '\n';
 };
 {

 Vector v;
 v.push_back("apple");
 v.push_back("pear");
 showVector(v);
 v.pop_back();
 showVector(v);

 }
}


/*
Expected Value
Vector size: 2
Vector size: 1

*/