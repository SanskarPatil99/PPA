#include<iostream>
#pragma pack(1)
using namespace std;
//error

class Demo{
    int i;
    char ch;
    float f;

};
 
int main()
 {
     class Demo dobj;
     dobj.i=11;
     dobj.ch='A';
     dobj.f=3.14f;
    return 0;
 }