# LAB1-DATA-STRUCTURES-AND-ALGORITHMS

LAB 1 

In this Lab you are required to create Vector container using C-style mechanisms
new/delete/pointers (without using STL).
You have to implement Vector with the following constraints:
1. You cannot modify Payload and User code, except when trying. The
submissions must include the original Payload and User code, so the
expected output can be verified.
2. You cannot use STL containers in your code. Do not use standard C++
header includes

##Summary of the tasks:

1. Create statically sized Vector (its capacity is a constant variable)
2. Add Vector methods: push_back, pop_back, size
3. Change static allocation of Vector to 1-sized array with doubling capacity. To
be able to modify its capacity, the array must be dynamically allocated. Add
method capacity reporting the allowed size before reallocation is required.
4. Assume that Payload has a method print. Add print method (non- standard)
to Vector so that print is called on each element. Remember: no standard header
includes should be in your code.
5. Generate ChatGPT Solution and compare your solution to the generated one.
6. Bonus: Make your Vector work with range based loop