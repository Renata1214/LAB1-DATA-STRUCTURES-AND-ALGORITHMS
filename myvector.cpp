#include "payload.h"
#include "myvector.h"
/*... your code here, containing Vector Struct member & method
definition*/

int Vector::VecCounter = 0;


Vector::Vector (string n1,string n2, string n3,string n4){
    IdVec= VecCounter+1;
    Payload V1(n1);
    Payload V2(n2);
    Payload V3(n3);
    Payload V4(n4);

    Object1 = &V1;
    Object2 = &V2;
    Object3 = &V3;
    Object4 = &V4;
    }//Ask how they managed to write born function before declaring it in payload.h


