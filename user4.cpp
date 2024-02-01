#include <iostream>
#include "myvector.h"
//#include "mylist.h"

using std::cout;
int main()
{
 auto showVector = [](const Vector & v)
 {
 cout << "Vector size/capacity: " << v.size() << '/' <<
v.capacity() << '\n';
 v.print();
 cout << '\n';
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
cout<< "now pop back" << '\n';
v.pop_front();
showVector(v);
v.push_front("grapes");
showVector(v);
 }
}

/*
Vector size/capacity: 1/1
(apple)
Vector size/capacity: 3/4
(apple)(pear)(banana)
Vector size/capacity: 2/4
(apple)(pear)
*/
