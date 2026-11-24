#include<stdio.h>
#pragma pack(1)
//1 2 3 4 8
struct Demo{
    int i;
    char ch;
    float f;
    double d;

};
int main()
{
    struct Demo dobj1;
    struct Demo dobj2;
    struct Demo *dp=NULL;

    dp=&dobj2;

    dobj1.i=11;
    dobj1.ch='A';
    dobj1.f=90.99f;

    dp-> i=21;
    dp-> ch='B';

    printf("%d\n",dobj1.i);
    printf("%d\n",dp->i);

    return 0;
}