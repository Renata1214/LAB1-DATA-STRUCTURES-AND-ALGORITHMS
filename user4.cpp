#include <iostream>
#include "myvector.h"
#include "mylist.h"


using std::cout;
int main()
{
 auto showVector = [](const Vector & v)
 {
 cout << "Vector size/capacity: " << v.size() << '/' <<
v.capacity() << '\n';
 };
 {
 Vector v;
 v.push_back("apple");
 showVector(v);
 v.push_back("pear");
 v.push_back("banana");
 showVector(v);
 v.pop_back();
 showVector(v);
 }
}



/*
Output:
Vector size/capacity: 1/1
Vector size/capacity: 3/4
Vector size/capacity: 2/4
*/